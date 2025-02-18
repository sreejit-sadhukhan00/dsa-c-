// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number:" << endl;
//     cin >> n;
//    bool isbool=0;
   
//    if (n <= 1) {
//         cout << n << " is not a prime number." << endl;
//         return 0;
//     }
    
//    for(int i=2;i<=n/2;i++){
//     if(n%i==0){
//         isbool=1;
//         break;
//     }
//    }

//    if(isbool==1){
//     cout<<n<<" isnt a prime num";
//    }
//    else{
//       cout<<n<<" is a prime num";
//    }
// }



#include <iostream>
using namespace std;

int main(){
    bool isbool=0;
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    if(n==1 || n==0){
        cout<<"It isnt either a prime number or non prime number"<<endl;
    }

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
         isbool=1;
         break;
        }
      }
      if(isbool==1){
        cout<<n<<" isn't a prime number"<<endl;
      }
      else{
         cout<<n<<" is a prime number"<<endl;
      }

}