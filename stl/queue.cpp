#include <iostream>
#include<queue>
// like a line
// fifo==>first in first out

using namespace std;
int main(){

    queue<string> q;

    q.push("love");
    q.push("BABBAR");
    q.push("code");

    cout<<"the front element"<<q.front()<<endl;
    q.pop();
    cout<<"the front element"<<q.front()<<endl;

    cout<<"size after pop"<<q.size()<<endl;
}