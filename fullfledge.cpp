#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows in the pattern
    int i = 1;
    
    while(i<=n){
        //for space (1st triangle)
        int a=1;
        int num =n-i+1;
        while(num){
            cout<<a;
            a++;
            num--;
        }
        
        //for second triangle
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        
        //for third triangle
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        
        //for fourth triangle
       
        int b =n-i+1;
        while(b>=1){
            cout<<b;
            b--;
            
        }
       
        cout<<endl;
        i++;
    }
}