#include <iostream>
using namespace std;


// 1--->even
//0---->odd
bool evenodd(int a){
   if(a&1){// odd
    return 0;
   }
   else{//even
    return 1;
   }


}
int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    if (evenodd(num)){
      cout<<"the number is even"<<endl;
    }
    else{
        cout<<"the number is odd"<<endl;
    }

}