find difference between the product and sum of a three digit number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value  a more than three digit number :"<<endl;
    cin>>n;
    int product=1;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        product= product*digit;
        sum =sum+digit;

        n=n/10;

    }
    int ans=product-sum;
    cout<<  "the difference is" << ans<<endl;
}

