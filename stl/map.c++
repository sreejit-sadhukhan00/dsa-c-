#include <iostream>
#include<map>
// key value pair every key has to be different
//  complexity is 0(log n);
using namespace std;
int main(){
    map<int,string> m;

    m[1]="babbar";
    m[12]="love";
    m[3]="kumar";
    m[5]="kumar";
    m[7]="jdjd";

    

m.insert({5,"bheem"});
      
cout<<"before erase"<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}


cout<<" finding 13->"<<m.count(12)<<endl;
 

m.erase(12);
cout<<"after erase "<<endl;
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

auto it=m.find(5);

for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}

}