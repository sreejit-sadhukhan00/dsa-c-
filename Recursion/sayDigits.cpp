#include<iostream>
using namespace std;

void sayDigits(int n,string arr[]){
    // base case
    if(n==0) return;

    // recursive call
    sayDigits(n/10,arr);

    // processing
   int digit=n%10;
   cout<<arr[digit] <<" ";

}


int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"}  ;  int n;
    cin>>n;
    sayDigits(n,arr);
}