#include<iostream>
using namespace std;

void count(int n){
    if(n==0) return;

    // tail recursion gives backwards counting
    // cout<<n<<" ";
    // count(n-1);

    // head recursion gives counting increasing order

    count(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    count(n);
}