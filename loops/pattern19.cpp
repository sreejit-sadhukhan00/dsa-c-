#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "give the number rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){

        //print the spaces---->
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        // print the stars------>
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}