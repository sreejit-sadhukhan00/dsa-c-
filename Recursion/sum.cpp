#include<iostream>
using namespace std;


int sumArr(int arr[],int n){
  if(n==0){
    return 0;
  }
  return arr[0]+sumArr(arr+1,n-1);
  
}


int main(){
    int arr[4]={9,9,9,9}  ; 
     int n=4;
    
   int ans= sumArr(arr,n);
   cout<<ans;
}