#include <iostream>
#include<set>
// only contain unique elements in sorted order using bst  ignore duplicates
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(2);
    s.insert(1);
    s.insert(6);  //0(log n) time complexity 

    for(int i:s){
        cout<<i<<endl;
    }cout<<endl;

   s.erase(s.begin());
     
   for(int i:s){
    cout<<i<<endl;
}cout<<endl;



cout<<"is 5 present or not ->"<<s.count(-5)<<endl;


set<int>::iterator itr=s.find(5);

// cout<<"value of itr is"<<*itr<<endl;

for(auto it=itr;it!=s.end();it++){
    cout<<it<<" ";
}cout<<endl;




}