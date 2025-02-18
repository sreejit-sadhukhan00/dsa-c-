// for a increasing order array--------->>
#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+((end-start)/2));
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+((end-start)/2));
    }
    return -1;
}

int main()
{
    int size;
    cout<<"enter the array size"<<endl;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the number:" << endl;
        cin >> arr[i];
    }
    int n;
    cout << "enter the key element" << endl;
    cin >> n;
    int index = binarySearch(arr, size, n);
    if (index == -1)
    {
        cout << "the key is not present" << endl;
    }
    else
    {
        cout << "the key is present at:" << index << endl;
    }
}

