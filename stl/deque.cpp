#include <iostream>
#include<deque>

using namespace std;
int main(){
   deque<int>d;
   d.push_back(1);
   d.push_front(2);

   for(int i:d){
    cout<<i<<" ";
   }cout<<endl;

//    d.pop_front();
//    for(int i:d){
//     cout<<i<<" ";
//    }

cout<<"print first index element"<<d.at(1)<<endl;
      
  cout<<"empty or not"<<d.empty()<<endl;

   cout<<"before erase"<<d.size()<<endl;
//    parameter from where to where its gonna erase
   d.erase(d.begin(),d.begin()+1);
   cout<<"before erase"<<d.size()<<endl;

   for(int i:d){
    cout<<i<<" ";
   }cout<<endl;

}