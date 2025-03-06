#include<iostream>
using namespace std;

void bubblesort(int arr[],int size){

    // base casee
    if(size==0 || size==1){
        return;
    }
    // solve for 1 case
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,size-1);

}

int main(){
    int arr[6]={23,2,45,6,56,13};
    int size=6;

    bubblesort(arr,6);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}