#include <iostream>
using namespace std;


//1---->prime no
//0----->not a prime no
bool isprime(int n){
for(int i=2;i<n;i++){
    if(n%i==0){
        return 0;
    }
    return 1;
}


}
int main(){
int n;
cout<<"enter the number"<<endl;
cin>>n;
if(isprime(n)){
    cout<<"is a prime no."<<endl;
}
cout<<"is not a prime no."<<endl;
}