#include <iostream>
#include<queue>
// first element is always of greatest priority by default

using namespace std;
int main(){
    // max heap
  priority_queue<int> maxi;

//   min heap
priority_queue<int,vector<int>,greater<int> > mini ;

maxi.push(1);
maxi.push(2);
maxi.push(3);
maxi.push(0);
cout<<maxi.size()<<endl;
int n=maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}cout<<endl;



mini.push(5);
mini.push(1);
mini.push(0);
mini.push(4);
mini.push(3);

int a=mini.size();
for(int i=0;i<a;i++){
    cout<<mini.top()<<" ";
    mini.pop();
}cout<<endl;

cout<<"khali hai kyaa bhai "<<mini.empty();
}