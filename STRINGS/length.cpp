#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
 for(int i=0;name[i]!='\0';i++){
   count ++;
 }   
 return count;

}
int main(){
 char name[20];
 cout<<"enter the name"<<endl;
    cin>>name; 

    int result=getlength(name);
    cout<<"the length of given string is :"<<result;

}