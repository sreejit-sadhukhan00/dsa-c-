// //binary to decimanl
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while(n!=0){
//         int digit=n%10;
//         if(digit==1){
//             ans=ans+pow(2,i);

//         }
//        n=n/10;
//         i++;

//     }
//     cout <<"anser is:"<<ans<<endl;
// }


#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int n;
    cout<<"enter num :"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
           ans =(digit*pow(2,i))+ans;
        }
        n=n/10;
        i++;
    }
    cout<<"ans is :"<<ans;
}