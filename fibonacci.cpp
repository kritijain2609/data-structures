#include <iostream>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    //in fabinacci 1st and 2nd no is alwys 0 and 1
    int first=0;
    int second=1;
    cout <<first<<" "<<second<<" ";
    for(int i = 1; i<=a;i++){
       int next=first+second;
       cout<< next<< " ";
       first=second;
       second=next;
    }
    
}