#include<iostream>
using namespace std;

bool searcharr(int arr[],int key,int n){
    if(n==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
 
    return searcharr(arr+1,key,n-1);
 
    
}



int main(){
    int arr[4]={8,89,7,0}  ; 
     int n=4;
    
   int ans= searcharr(arr,7,n);
   if(ans){
    cout<<"key is found"<<endl;
   }
   else{
    cout<<"key is not found"<<endl;
   }

}