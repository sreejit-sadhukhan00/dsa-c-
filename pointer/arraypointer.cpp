#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,6,5,4,67,87};
    // cout<<"address of first memory block of array is: "<<arr<<endl;
    // cout<<"address of first memory block of array is: "<<&arr[0]<<endl;
    
    // value of the first element of the array
    // cout<<"3rd "<<*arr<<endl;
    // // increasing its value
    // cout<<"3rd "<<*arr+1<<endl;
    // // increasing its index
    // cout<<"5th "<<*(arr+1)<<endl;

    // cout<<"6th "<<*arr+1<<endl;

    // cout<<"7th "<<*(arr+2)<<endl;

    // int i=3;
    // // both are same below
    // cout<<i[arr]<<endl;
    // cout<<"7th "<<*(arr+i)<<endl;
    
   
// int temp[10]    = {2,6,5,4,67,87};
// cout<<sizeof(temp)<<endl;

// int *p=&temp[0];
// cout<<sizeof(p)<<endl;

// // size of the value at p
// cout<<sizeof(*p)<<endl;

// cout<<sizeof(&p)<<endl;


// cout<<sizeof(&temp)<<endl;

// cout<<sizeof(*temp)<<endl;


// int a[20]={1,2,3,4,5};


// int*p=&a[0];
// cout<<&a[0]<<endl;
// cout<<&p<<endl;
// cout<<*p<<endl;
// // a=a+1;
// p=p+1;
// cout<<*p<<endl;

char ch[5]="abcd";

cout<<ch<<endl;

char *c=&ch[0];
cout<<c<<endl;

char temp='l';
char *p=&temp;
cout<<p<<endl;






    return 0;
}