#include <iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
        int ans=n*fact(n-1);
        return ans;
}
int nCr(int n, int r){
      int numerator=fact(n);
      int denominator=fact(r)*fact(n-r);
      int ans=numerator/denominator;
      return ans;
}
int main(){
int n, r;
cout<<"enter the value of n"<<endl;
cin>>n;
cout<<"enter the value of r"<<endl;
cin>>r;
int ans =nCr(n,r);
cout<<" the answer is:"<<ans<<endl;
}

// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//    int ans=n*fact(n-1);
//     return ans;
// }