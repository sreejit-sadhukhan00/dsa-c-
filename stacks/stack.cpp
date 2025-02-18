#include<iostream>
#include<stack>
using namespace std;

int main(){
    // creation of stack
    stack<int> s;
    s.push(2);
    s.push(3);
    // always gets popped from the top element
    s.pop();

    cout<<"printing top element :"<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty \n" << endl;
    }
        else {
            cout<<"stack is not empty \n"<< endl;
        }
    
     cout<<"stack size is "<<s.size()<< endl;
}