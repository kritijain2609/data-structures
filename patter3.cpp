#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows in the pattern
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<i){
            cout<<" ";
            j++;
        }
        int k =1 ;
        while(k<=n-i+1){
            cout<<i;
            k++;
        }
        cout<<endl;
        i++;
        }
    }