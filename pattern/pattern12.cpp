#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows"<<endl;
    cin>>n;
    char count='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
          cout<<count<<" ";
          j++;
          count++;
        }
        cout<<endl;
        i++;
    }
}
