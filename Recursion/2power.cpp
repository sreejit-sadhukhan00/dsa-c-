#include<iostream>
using namespace std;

int power2(int n){
   if(n==0) return 1;

//    int smallerprob=power2(n-1);
//    int biggerprob=2*smallerprob;
   return 2*power2(n-1);
}


int main(){
    int n;
    cin>>n;

    int ans=power2(n);

    cout<<ans<<endl;
}
