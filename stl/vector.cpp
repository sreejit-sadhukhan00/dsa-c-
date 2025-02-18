#include <iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> b(5,1); //size 5 and initial value of elem is 1
    cout<<"print a"<<endl;
    for(int i:b){
        cout<<i<<" ";
     }cout<<endl;
    vector<int> last(a);// it copies a

    vector<int>v;
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity ->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size ->"<<v.capacity()<<endl;

    v.push_back(3);
    // here it creates a vector of double of its size than previos
    cout<<"size ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;


    cout<<"element at 2nd index->"<<v.at(2);
    cout<<"front->"<<v.front();
    cout<<"back->"<<v.back();

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size ->"<<v.size()<<endl;
    //it clear the size of vector not its capacity
    v.clear();
    cout<<"after clear size ->"<<v.size()<<endl;


}