#include<iostream>
using namespace std;


int partition(int arr[],int s, int e){
    int pivot=arr[s];

    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
           count++;
        }
    }
// place pivot at right position
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);

    // left right balancing

    int i=s;
    int j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
 }
 return pivotIndex;

}

void quickSort(int arr[],int s,int e){
    // base case
    if(s>=e) return;

    // patitioning
   int p = partition(arr,s,e);

   quickSort(arr,s,p-1);
   quickSort(arr,p+1,e);
}


int main(){
    int arr[10]={23,2,45,6,56,13,32,12,66,9};
    int size=10;
    int s=0;
    int e=size-1;
    quickSort(arr,s,e);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}