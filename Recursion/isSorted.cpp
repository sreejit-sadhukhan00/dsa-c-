#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
//  base case
if(size==0||size==1){
    return true;
}
//   processing

if(arr[0]>arr[1]){
    return false;
}
else{
    bool ans=isSorted(arr+1,size-1);
    return ans;
}


}


int main(){
    int arr[4]={9,9,9,9}  ; 
     int n=4;
    
   bool ans= isSorted(arr,n);
   if(ans){
    cout<<"array is sorted"<<endl;
   }
   else{
    cout<<"array is not sorted"<<endl;
   }
}