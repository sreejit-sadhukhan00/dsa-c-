#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "give the number rows"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int value =i;
        while(j<=i){
            cout<<value<<"  ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}