#include <iostream>
using namespace std;
 
int main(){
    int a;
    cin>>a;
    int prime=0;
    for(int i = 2; i<=a;i=i+2){
       if (a%i==0){
           prime++;
       }
    }
       if (prime==0){
           cout<< "this is prime number";
       }
       else {
           cout<<"not a prime number";
       }
    
    
}