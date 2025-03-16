#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data"<<value<<endl;
    }
};

// INSERTION===================>>>>>>>>>>>>>>
// insert at start
void InsertAtHead(Node* &Head,int d){
    // mew node creation
    Node* temp=new Node(d);
    temp->next=Head;
    Head=temp;
}

// insert at end
void InsertATTail(Node* &tail,int data){
     Node* temp=new Node(data);
     tail->next=temp;
     tail=tail->next;
}
        
// insert at mentioned position
void InsertAtpos(int pos,int data,Node* &Head,Node* &Tail){ 
// insert at starting
    if(pos==1){
        InsertAtHead(Head,data);
         return;
    }
    // go till desired node
     Node* temp=Head;
      int i=1;
      while(i<pos-1){
        temp=temp->next;
        i++;
      }
    //   inserting at last
      if(temp->next==NULL){
          InsertATTail(Tail,data);
          return;
      }
       // create a nodee
       Node* newNode=new Node(data);
      newNode->next=temp->next;
      // then change the pos-1th node next to the new node
       temp->next=newNode;

}

// print of ll
void print(Node* Head){
    Node* temp=Head;
     
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
    cout<<endl;
}

// DELETION=======================>>>>>>>>>
 
void deleteNode(int position,Node* &head,Node* &tail){
    // start nodee deletion
    if(position==1){
       Node* temp=head;
       head=head->next;
       temp->next=NULL;
       delete temp;

       if (head == NULL) tail = NULL;
        return;
    }
    // deleteing any mid or last node
    else{
       Node* prev=head;
       int i=1;
       while(i<position-1 && prev->next != NULL){
         prev=prev->next;
        i++;
       }
        Node* current=prev->next;
       if(current->next==NULL){
        tail=prev;
       }
       prev->next=current->next;
       current->next=NULL;
       delete current;
     }
}






int main(){
    Node* node1=new Node(10);
    //  head pointer to node1
    Node* Head=node1;
    Node* tail=node1;
     print(Head);
     InsertATTail(tail,76);
     print(Head);
     InsertATTail(tail,98);
     print(Head);

     InsertAtpos(4,79,Head,tail);
     print(Head);
    
     cout<<"after deleting"<<endl;
     deleteNode(4,Head,tail);
      print(Head);

      cout<<"head"<<Head->data<<endl;
      cout<<"tail"<<tail->data<<endl;

}