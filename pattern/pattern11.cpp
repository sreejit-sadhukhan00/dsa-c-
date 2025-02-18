#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char result='A';
        while(j<=n){
           char val='A'+j-1;
           cout<<val<<" "; 
           j++;
        }
        cout<<endl;
        i++;
    }
}