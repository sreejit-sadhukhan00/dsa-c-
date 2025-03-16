#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &Head,int d){
    // mew node creation
    Node* temp=new Node(d);
    temp->next=Head;
    Head=temp;
}

// ll traversal
void print(Node* &Head){
   Node* temp=Head;
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
   }
   cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    //  head pointer to node1

    Node* Head=node1;

    InsertAtHead(Head,76);
    InsertAtHead(Head,98);
     
    print(Head);
    
}