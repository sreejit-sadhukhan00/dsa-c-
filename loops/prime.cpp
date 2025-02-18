#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    int flag=0;
    while(i<n){
        if(n%i==0){
            flag=1;
        }
      i++;
    }
    if(flag==0){
        cout<<" the input is prime"<<endl;
    }
    else{
        cout<<"the input is not prime"<<endl;
    }
}