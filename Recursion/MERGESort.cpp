#include<iostream>
using namespace std;


void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
   int len1=mid-s+1;
   int len2=e-mid;

   int *first=new int [len1];
   int *second=new int [len2];

//    copy values
   int k=s;
   for(int i=0;i<len1;i++){
    first[i]=arr[k];
    k++;
   }
     k=mid+1;
   for(int i=0;i<len2;i++){
    second[i]=arr[k];
    k++;
   }

//    merge 2 sorted arrays
int index1=0;
int index2=0;
int mainArrayIndex=s;

while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[mainArrayIndex]=first[index1];
        index1++;
    }
    else{
        arr[mainArrayIndex]=second[index2];
        
        index2++;
    }
    mainArrayIndex++;
}

while(index1<len1){
    arr[mainArrayIndex]=first[index1];
        index1++;
        mainArrayIndex++;
}

while(index2<len2){
    arr[mainArrayIndex]=second[index2];
        mainArrayIndex++;
        index2++;
}

delete []first;
delete []second;
}

void mergesort(int arr[],int s,int e){
//    base cases
 if(s>=e) return;

int mid=s+(e-s)/2;

//  left part sort
   mergesort(arr,s,mid);

//    right part sort
  mergesort(arr,mid+1,e);

//   merge
    merge(arr,s,e);
}



int main(){
    int arr[10]={23,2,45,6,56,13,32,12,66,9};
    int size=10;
    int s=0;
    int e=size-1;
     mergesort(arr,s,e);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}