#include <iostream>
using namespace std;
// first occurance or leftmost occurance of the key----->>
int firstOcc(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
// last occurrence or rightmost occurrence
int lastOcc(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key) {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int size;
    cout << "enter the array size" << endl;
    cin >> size;
    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" th element"<<endl;
        cin>>arr[i];
    }
     
    cout<<"The Given Array is : "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int key;
    cout<<endl<<" enter the value of the key"<<endl;
    cin>>key;


    cout << "first occurrence of key is at index : " << firstOcc(arr, size, key) << endl;
    cout << "last occurrence of key is at index : " << lastOcc(arr, size, key) << endl;
    return 0;
}