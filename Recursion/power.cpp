#include<iostream>
using namespace std;

int power(int a,int b){
    // base case
   if(b==0) return 1;

   if(b==1) return a;

// recursion call
   int ans=power(a,b/2);

//    if b is even
   if(b%2==0){
    return ans*ans;
   }
//    if b is odd
   else{
    return a*ans*ans;
   }

}


int main(){
    int a;
    int b;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;

    cout<<"a^b is "<<power(a,b);
}