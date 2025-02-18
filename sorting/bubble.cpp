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

// bubble sorting
for (int i=0;i<n-1;i++)  // for rounds 0-----> n-1
{ 
    int flag=0;
    for(int j=0;j<n-i-1;j++)  // its n-i-1 bcz after each round last element gets sorted
    {
          if(arr[j]>arr[j+1])  // for each corresponding comparisons
          {
            swap(arr[j],arr[j+1]);
            flag=1;
          }
          
    }
    if(flag==0){
            break;
          }
}
cout<< endl<<"the sorted array is :"<<endl;
for(int i=0;i<n;i++){
    cout<< arr[i] <<"  ";
}
  return 0;


}