#include<iostream>
using namespace std;

int getlength(string name){
    int count=0;
    for(int i=0;i<name.size();i++){
        count ++;
    }
    return count;
}


int main(){
    string name;
    cout<<"enter the name"<<endl;
       cin>>name; 
        int result=getlength(name);
        cout<<"the name is"<<name<<" "<<result<<endl;
   }