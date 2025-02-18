#include <iostream>
using namespace std;
void swap1(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


void alternateswap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
        swap1(arr,i,i+1);
    }}
}




int main()
{
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i<size; i++)
    {
        cout << "enter a num" << endl;
        cin >> arr[i];
    }
   cout<<"Array before swapping is"<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    alternateswap(arr,size);
    cout<<"the swapped array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}