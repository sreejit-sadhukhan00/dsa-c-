#include<iostream>
using namespace std;
int main(){
    int num=5;
    // address operator-&
    cout<<"address of num is"<<&num<<endl;
    int *ptr=&num;
    cout<<"address of num is"<<ptr<<endl;

    // access value using pointer
    cout<<"value pointed by ptr is "<<*ptr<<endl;

    cout<<"size of integer is"<<sizeof(num)<<endl;
    cout<<"size of pointer is"<<sizeof(ptr)<<endl;

    // bad practice===>
    // pointer to int is created and pointing to some random address
    // int *p;
    // cout<<"value of p is"<<*p<<endl;
    //  do this instead
    int *pt=0;


   int i=5;
   int a=i;
    int *p=&i;
    a++;
   
    cout<<i<<endl;
    (*p)++;


    // pointer copy 
    int *q=p;
    cout<<*q<< " -"<<q<<endl;
    cout<<*p<< " -"<<p<<endl;
    
    cout<<a<<endl;


    // pointer arithmatic
    int l=7;
    int *t=&l;
    (*t)++;
    cout<<t<<endl;
    t++; //goes to next integer
    cout<<t<<endl;
    cout<<l<<endl;
    

}