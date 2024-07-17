#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int,string> m;
    
    m[1]="kriti";
    m[2]="jain";
    m[13]= "12345";
    m.insert({5,"hello"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"finding 13 "<<m.count(13);
    cout<<endl;
    m.erase(13);
    cout<<"after erase";
    cout<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
}  