// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the value of n"<<endl;
//     cin>>n;

//    int  a=0;
//    int b=1;
//    cout<<a<<" "<<b<<" ";
//    for(int i=1;i<=n;i++){
//     int sum=a+b;
//     cout<<sum<<" ";
//     a=b;
//     b=sum;
//    }
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<endl;
    cout<<b<<endl;
    int sum;
    for(int i=1;i<=n;i++){
        sum=a+b;
        cout<<sum<<endl;
        a=b;
        b=sum;
    }
      
}