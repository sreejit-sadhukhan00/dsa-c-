#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
vector<int> v;
v.push_back(1);
v.push_back(3);
v.push_back(5);
v.push_back(8);
v.push_back(11);


cout<<"finding 5=>"<<binary_search(v.begin(),v.end(),5)<<endl;

cout<<"lower bound"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
cout<<"upper bound"<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;



int a=4;
int b=7;
cout<<max(a,b)<<endl;
cout<<min(a,b)<<endl;
swap(a,b);
cout<<a<<endl;



string abcd="abcd";
reverse(abcd.begin(),abcd.end());

cout<<abcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());

cout<<"after rotate"<<endl;
for(int i:v){
    cout<<i<<" ";
}cout<<endl;
}