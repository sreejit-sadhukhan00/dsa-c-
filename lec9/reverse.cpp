// #include <iostream>
// #include <math.h>
// using namespace std;
// int reverse( int arr[], int n){
//     int start =0;
//     int end =n-1;
//     while(start<=end){
//         int temp=arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start++;
//         end--;
//     }
// }





// int main()
// {
//     int n;

//     int size;
//     cout << "enter the size of array" << endl;
//     cin >> size;
//     int num[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout << "enter a num:" << endl;
//         cin >> num[i];
//     }
//     for(int i=0;i<size;i++){
//         cout<<num[i]<<"  ";
//     }
//     cout<<endl;

//     reverse(num,size);
//     for(int i=0;i<size;i++){
//         cout<<num[i]<<"  ";
//     }
//     return 0;
// }


#include <iostream>
#include <math.h>
using namespace std;
int reverse(int arr[],int size){
   int start=0;
   int end=size-1;
   int temp;
   while(start<=end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
   }
}


int main(){
    int size;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++){
        cout<<"enter the "<<i+1<<"th number"<<endl;
        cin>>num[i];
    }
    cout<<" before reverse : ";
    for(int i=0;i<size;i++){
    cout<<num[i]<<" ";
   }

    reverse(num,size);


   
    cout<<endl;
    cout<<" after reverse : ";
   for(int i=0;i<size;i++){
    cout<<num[i]<<" ";
   }


}