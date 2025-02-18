#include <iostream>
using namespace std;
int getpivot(int arr[], int size)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){
       if(arr[mid]>=arr[0]){
        s=mid+1;
       } 
       else{
        e=mid;
       }
       mid=s+(e-s)/2;
    }
    return e;
}
int main()
{
    int size;
    cout << "enter the array size" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the number:" << endl;
        cin >> arr[i];
    }
    cout << "pivot is: " << getpivot(arr, size) << endl;
}kk