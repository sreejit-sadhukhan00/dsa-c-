#include<iostream>
using namespace std;

void strreverse(string& str,int i,int j){
//    base case
   if(i>j) return;

//    process one step 
swap(str[i],str[j]);
i++;
j--;
// recursive call

   strreverse(str,i,j);
}

int main(){
    string name="Babbar";
    int i=0;
    int j=name.length()-1;
    strreverse(name,i,j);
    cout<<name;
}