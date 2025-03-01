#include<iostream>
using namespace std;

void update(int n){
    n=n+1;
}
void update1(int& n){
    n=n+1;
}

// bad practice as it pass the reference of local variable bcz its not available outside its scope
int& func(int n){
    int num=n;
    int& ans=num;
    return ans;
}


int main(){
// create a reference variable
//    int k=10;
//    int& j=k;
   
//     cout<<"k="<<k<<endl;
//     k++;
//     cout<<"j="<<j<<endl;

 int n=7;
    // cout<<"before update n="<<n<<endl;
//  update(n); 
    update1(n);

    // cout<<"after update n="<<n<<endl;

// char ch='q';
//  cout<<sizeof(ch)<<endl;
//  char* c=&ch;
//  cout<<sizeof(c)<<endl;


// dynamic array creation
  int k;
  cin>>k;
int* arr=new int[k];

for(int i=0;i<k;i++){
    cout<<"enter"<<endl;
    cin>>arr[i];
}
 
for(int i=0;i<k;i++){
    cout<<arr[i]<<endl;
}



// case 1
 whike(1){
    int i=5;
 }

//  case 2
// while(true){
//     int* ptr=new int;
// }


}