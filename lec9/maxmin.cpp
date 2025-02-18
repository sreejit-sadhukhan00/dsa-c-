


#include <iostream>
#include<math.h>
using namespace std;


      int getmax(int arr[],int size){
           int max=arr[0];
           for(int i=0;i<size;i++){
            if(max<arr[i]){
                max=arr[i];
            }
           }
           return max;
      }
      int getmin(int arr[],int size){
           int min=arr[0];
           for(int i=0;i<size;i++){
            if(arr[i]<min){
                min=arr[i];
            }
           }
           return min;
      }




int main(){
    int size;
    cout<<"eter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the "<<i+1<<"th element :"<<endl;
        cin>>arr[i];
     }

     int maximum=getmax(arr,size);
     cout<<"the maximum of the array is"<<maximum<<endl;
     int minimum=getmin(arr,size);
     cout<<"the minimum of the array is"<<minimum<<endl;
}