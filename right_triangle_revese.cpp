#include <iostream>
using namespace std;
int main() {
  int n=4;
  int i =1;
  while(i<=n){
      int j = 1;
      int star=n-i+1;
      while(j<=i){
           while(star>=0){
          cout<<"*";
          star=star-1;
          j=j+1;
      }
      }
      cout<<endl;
      i=i+1;
  }
}    
