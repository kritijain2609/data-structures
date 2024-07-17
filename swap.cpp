#include <iostream>
using namespace std;

void swaparray(int arr[],int n){
    for(int i = 0; i<n ; i=i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);

        }
        cout<<arr[i];
        cout<<endl;
   }
}
void printarray(int arr[],int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i];

    }cout<<endl;
}

int main(){
     
     int arr[6]={4,5,6,7,8,9};
     swaparray(arr,6);
     printarray(arr,6);
     
     return 0;
}