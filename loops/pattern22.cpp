#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "give the number rows"<<endl;
    cin>>n;
    int i=1; 
    while(i<=n){
       // print space triangle---.
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        //print second triangle--->
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        } 
         //print third triangle--->
        int start=i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
}