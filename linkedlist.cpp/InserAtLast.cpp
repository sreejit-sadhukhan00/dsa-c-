#include<iostream>
#include<map>
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


bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp=head;
    while(temp!=NULL ){

        if(visited[temp]==true){
            return true;
        }

        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

Node* floydCycleDetection(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            cout<<"present at"<<slow->data<<endl;
            return slow;
        }
    }
}

Node* getCycleStart(Node* head){
 if(head==NULL){
    return NULL;
 }
 Node* intersection=floydCycleDetection(head);

 Node* slow=head;

 while(slow!=intersection){
    slow=slow->next;
    intersection=intersection->next;
 }
 return slow;
}

void removeLoop(Node* &head){
    if(head==NULL){
        return ;
    }

    Node* Loopstart=head;
    Node* temp=head;
    
    while(temp->next!=Loopstart){
        temp=temp->next;
    }
    temp->next=NULL;
     
}

int main(){
    Node* node1=new Node(10);
    //  head pointer to node1
    Node* Head=node1;
    Node* tail=node1;
     InsertATTail(tail,76);
     InsertATTail(tail,98);
     InsertAtpos(4,79,Head,tail);
    
    //  cout<<"after deleting"<<endl;
    //  deleteNode(4,Head,tail);
       print(Head);

      tail->next=Head->next;
     if(detectLoop(Head)){
        cout<<"Loop is present "<<endl;
     } else{
        cout<<"no cycle detected "<<endl;
     }

        Node* cycleStart=getCycleStart(Head);
    
        removeLoop(cycleStart);
        print(Head);
        // cout<<"cycle starts at"<<cycleStart->data<<endl;

    //   cout<<"head"<<Head->data<<endl;
    //   cout<<"tail"<<tail->data<<endl;

}