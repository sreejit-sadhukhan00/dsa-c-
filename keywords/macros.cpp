#include<iostream>
using namespace std;
// macro definition
#define PI 3.14
// global variable
int score=6;

// void b(int& i){
//     cout<<"b"<<score<<endl;
    
//     cout<<i<<endl;
// }
// void a(int& i){
//     cout<<"a"<<score<<endl;
//     cout<<i<<endl;
//     b(i);
// }

// void func(int a, int b){
//     a++;
//     b++;
//     cout<<a <<b<<endl;
// }


inline  getMax(int& a,int& b){
    return (a>b)?a:b;
}

int main(){
    int r=5;
    cout<<"main"<<score<<endl;
    // // double pi=3.14;
    // double area=PI*r*r;
    // // cout<<"Area is "<<area<<endl;

    int i=5;
    // a(i);

// inline function 
  int a=1;
  int b=2;
//   func(a,b);

int ans=0;

// using ternary operator

ans=getMax(a,b);
cout<<ans<<endl;
a=a+3;
b=b+1;
ans=getMax(a,b);

cout<<ans<<endl;
}