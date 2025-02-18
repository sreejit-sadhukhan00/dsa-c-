#include <iostream>
using namespace std;
void printarray(int arr[],int size){
   for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
   } 
   cout<<"printing done"<<endl;
}
int main(){
    int arr[5]={12,34,32,11,22};
    printarray(arr,2);


}