#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "give the number rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            int x=n-j+1;
            cout<<x<<"  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}