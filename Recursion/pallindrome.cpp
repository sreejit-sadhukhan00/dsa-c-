#include<iostream>
using namespace std;

bool ispalindrome(string str,int i,int j){
//  base case
   if(i>j) return true ;

//    one processing

   if(str[i]!=str[j]){
    return false;
   }
//    recursive call
   else{
    return ispalindrome(str,i+1,j-1);
   }

}
int main(){
    string name="abba";
    int i=0;
    int j=name.length()-1;
     int ans=ispalindrome(name,i,j);

     if(ans){
        cout<<"its a pallindrome"<<endl;
     }
     else{
        cout<<"its not a pallindrome"<<endl;
     }
   
}