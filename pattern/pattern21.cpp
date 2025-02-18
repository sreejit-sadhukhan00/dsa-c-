#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows"<<endl;
    cin>>n;
   int i=1;
   while(i<=n){
    int space=n-i;
    // print spaces
    while(space){
        cout<<" ";
        space--;
    }
    int j=1;
    // print the first triangle
    while(j<=i){
        cout<<j;
        j++;
    }
    // print second triangle
    int num=i-1;
    while(num){
        cout<<num;
        num--;
    }
    cout<<endl;
    i++;
   }
}