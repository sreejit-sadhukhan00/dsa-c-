#include<iostream>
using namespace std;
char toLowercase (char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}








bool checkPalindrome(char a[], int n)
{
    int st=0;
    int end=n-1;
    while(st<=end){
          if( toLowercase (a[st])!= toLowercase (a[end])  ){
              return 0;
          }
          else{
              st++;
              end--;
          }
    }
    return 1;
}
int getlength(char name[]){
    int count=0;
 for(int i=0;name[i]!='\0';i++){
   count ++;
 }   
 return count;

}
int main(){
 char name[20];
 cout<<"enter the name"<<endl;
    cin>>name; 
     int result=getlength(name);
      
     cout<<"given word is pallindrome or not:"<<checkPalindrome(name,result)<<endl;
}