#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows"<<endl;
    cin>>n;
    int i=1;
   while(i<=n){
           int j=1;
           char result='A'+i-1;
           while(j<=n){
            cout<<result<<" ";
            j++;
           }
           cout<<endl;
           i++;
   }
}