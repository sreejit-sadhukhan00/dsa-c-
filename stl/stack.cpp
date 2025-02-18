#include <iostream>
#include<stack>
// topmost element can be accessed only 
// lifo==>last in first out

using namespace std;
int main(){
   stack<string> s;
    s.push("love");
    s.push("babbar");
    s.push("code");

    cout<<"top element-->"<<s.top()<<endl;

    cout<<"stack size"<<s.size()<<endl;
    cout<<"empty or not->"<<s.empty()<<endl;
    
} 