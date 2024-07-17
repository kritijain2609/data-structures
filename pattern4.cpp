#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows in the pattern
    int i = 1;
    
    while(i<=n){
        //for space (1st triangle)
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        
        //for second triangle
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        
        //for third triangle
        
        int k=i-1;
        while(k){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
}
