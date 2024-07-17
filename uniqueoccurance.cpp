#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[],int size) {
        int ans =0;
        int count=0;
   for(int i=0;i<size;i++){
       ans = ans^ arr[i];
       if(ans==0){
           count++;
       }
       if (count == 0){
           return 1;

       }
      
   }
    return 0;
}

int main() {
    int size;
    cin >> size;

    int a[100];
    for(int i =0;i<size;i++){
        cin>>a[i];
    }
    int found = uniqueOccurrences(a,size);
    cout << found;
    return 0;
}
