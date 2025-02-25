#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    *p=*p+1;
}

int getSum(int arr[],int n){
    cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
   
//    int value=7;
//    int *p=&value;

//     print(p);
//     update(p);
//     print(p);
int arr[5]={1,2,3,4,5};
 cout<<getSum(arr+2,3)<<endl;

}