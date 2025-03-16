#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"data delted is "<<val<<endl;
    }
};
// print the ll

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlength(node *head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// INSERTION=====================>>>>>>>

void InsertAtHead(node *&head, node *&tail, int data)
{

    node *newnode = new node(data);
    //   emptylist
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prev = head->prev;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void InsertAtTail(node *&tail, int data)
{
    node *temp = new node(data);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void InsertAtPos(node *&head, int pos, int data, node *&tail)
{
    if (pos == 1)
    {
        InsertAtHead(head, tail, data);
        return;
    }
    node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }
    node *newnode = new node(data);

    newnode->next = temp->next;
    temp->next->prev = newnode;
    newnode->prev = temp;
    temp->next = newnode;
}

// DELETION===============================>

void deleteNode(node* &head,int position,node* &tail){
      if(position==1){
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
      }
      else{
      int cnt=1;
      node*curr=head;
      while(cnt<position){
           curr=curr->next;
           cnt++;
      }
      node* prev=curr->prev;
      if(curr->next==NULL){
        tail=prev;
      }
    
       prev->next=curr->next;
       curr->prev=NULL;
       curr->next=NULL;
        delete curr;
    }
}

int main()
{
    //    node* node1=new node(19);
    node *head = NULL;
    node *tail = NULL;
    InsertAtHead(head, tail, 98);
    print(head);
    InsertAtHead(head, tail, 67);
    print(head);
    InsertAtTail(tail, 11);
    print(head);
    InsertAtPos(head, 4, 100, tail);
    print(head);
    deleteNode(head,4,tail);
    print(head);
}