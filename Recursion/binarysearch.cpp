#include<iostream>
using namespace std;

bool binarysearch(int arr[],int s,int n,int key){
    // base case 1
    if(s>n){
        return false;
    }
    int mid=s+(n-s)/2;

    // base case 2
    if(arr[mid]==key){
        return true;
    }

    // recursive algo
   else if (key<arr[mid]){
    return binarysearch(arr,s,mid-1,key);
   }
   else{
    return binarysearch(arr,mid+1,n,key);
   }
}



int main(){
    int arr[4]={12,54,67,87}  ; 
    int s=0;
     int e=4;
    
   int ans= binarysearch(arr,s,e,80);
   if(ans){
    cout<<"key is found"<<endl;
   }
   else{
    cout<<"key is not found"<<endl;
   }

}