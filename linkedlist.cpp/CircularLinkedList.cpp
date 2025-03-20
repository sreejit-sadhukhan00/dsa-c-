#include <iostream>
#include<map>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"data delted is "<<val<<endl;
    }
};
// insertion 

void insertNode(int data,node* &tail,int value){
    // empty list
    if(tail==0){
        node* newnode=new node(data);
        tail=newnode;
        newnode->next=tail;
    }
    // assuming value is present in the list 
    else{
        node* curr=tail;
        while(curr->data!=value){
            curr=curr->next;
        }
        // element found and curr at that element
        node* temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}
// print logic==>
void print(node* &tail){
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    node* temp=tail;
    do{
     cout<<temp->data<<" ";
     temp=temp->next;
    } while (temp!=tail);
    cout<<endl;
 }


// delete
void deletenode(int value,node* &tail){
    // empty list 
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    // single node

    else{
        // non empty
        
        node* prev=tail;
        node* curr=prev->next;
 
        // single node
        if(curr==prev){
          tail=NULL;
        }

        while(curr->data!=value){
           prev=curr;
           curr=curr->next;
        }

        prev->next=curr->next;
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
// empty list

bool detectLoop(node* head){
    if(head===NULL){
        return false;
    }

    map<node*,bool>visited;

    node* temp=head;
    while(temp!=NULL ){

        if(visited[temp]==true){
            return true;
        }

        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

int main(){
    node* tail=NULL;
insertNode(13,tail,0);
// insertNode(23,tail,13);
// insertNode(98,tail,13);
// insertNode(40,tail,23);
// print(tail);
 
deletenode(13,tail);
print(tail);
}