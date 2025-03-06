#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0){
        return 1;
    }

    //recursive relation
    //   int smallerproblem=factorial(n-1);
    //   int biggerproblem=n*smallerproblem;
      return n*factorial(n-1);
}


int main(){
    int n;

    cin>>n;

    int ans=factorial(n);

    cout<<" factorial of "<<n<<" is :"<<ans;
}