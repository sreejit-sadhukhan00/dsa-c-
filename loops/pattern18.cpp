#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "give the number rows"<<endl;
    cin>>n;
    int i=1;
while(i<=n){
    int j=1;
    char start='A'+n-i;
    while(j<=i){
     cout<<start<<"  ";
     start++;
     j++;
    }
    cout<<endl;
    i++;
}
}