// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
using namespace std;
int main() {
    set <int> s;
    
    
     s.insert(1);
     s.insert(2);
     s.insert(3);
     s.insert(3);
     s.insert(3);
     s.insert(0);
     
     for(auto i : s){

     cout<<i<<endl;
     }
     
     s.erase(s.begin());
     cout<<endl;
     for(auto i : s){
     cout<<i<<endl;
     }
     
     cout<<endl;
     cout<<"present or not 3 : " <<s.count(3)<<endl;
      cout<<endl;
     set<int>::iterator itr = s.find(3);
     for(auto it=itr;it!=s.end();it++)
     {
         cout<< "position of 3 "<< *it <<" ";
     }
     }