#include<iostream>
using namespace std;

void update(int **p){
    // p=p+1;
     
 
    //  *p=*p+1;
    


    **p=**p+1;
   
}
int main(){
    int i=8;
    int *ptr1=&i;
    int** ptr2=&ptr1;

    cout<<"value of pointer 1 "<<*ptr1<<endl;
    cout<<"address value of pointer 1 "<<ptr1<<endl;
    
    cout<<"address value of pointer 2 "<<ptr2<<endl;
    

    update(ptr2);
    cout<<"after "<<endl;
    cout<<i<<endl;
    cout<<"address value of pointer 1 "<<ptr1<<endl;
     cout<<" address value of pointer 2 "<<ptr2<<endl;
    //  cout<<"content value pointed by pointer 2 "<<**ptr2<<endl;

    
}