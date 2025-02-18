#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "give the number rows"<<endl;
    cin>>n;
    int i=1;
    char value='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<value<<"  ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}