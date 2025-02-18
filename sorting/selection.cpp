#include<iostream>
using namespace std;
int main(){
 int   arr[100], n;
cout<<"enter the size of array"<<endl;
cin>>n;
// array input
for(int i=0; i<n;i++){
    cout<<"enter array element "<<i+1<<": "<<endl;
    cin>>arr[i];
}
 cout<<"the unsorted array is :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<"  ";
}
//  selectio sorting  
for(int i=0;i<n-1;i++)// this loop is for passes
{
    int min=i;
     for(int j=i+1;j<n-1;j++){
        if(arr[min]>arr[j]){
           min =j;
        }
        if(min !=i){
             int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
     }
}
cout<< endl<<"the sorted array is :"<<endl;
for(int i=0;i<n;i++){
    cout<< arr[i] <<"  ";
}
  return 0;
}
