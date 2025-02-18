#include <iostream>
using namespace std;
int sqrtinteger(int n){
   int s=0;
   int e=n;
   int ans;
   int mid=s+(e-s)/2;
   while(s<=e){
    long long int square=mid*mid;
    if(square==n){
        return mid;
    }
    else if(square<n){
       ans=mid;
       s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
   }
   return ans;
}

double moreprecisionsqrt(int n,int precision,int tempsol)
{
   double factor=1;
   double ans=tempsol;
//    0.1
//    0.01
//    0.001
   for(int i=0;i<precision;i++){
    factor=factor/10;
    for( double j=ans;j*j<n;j=j+factor){
         ans=j;
    }
   }
   return ans;
}



int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;

    int tempsol=sqrtinteger(n);
    cout<<"amswer is:"<<moreprecisionsqrt(n,3,tempsol)<<endl;
    return 0;
}