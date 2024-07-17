#include <iostream>
using namespace std;

int reverse(int arr[],int n){

    int start=0;
    int end = n-1;
   while(start<=end){
    swap(arr[start],arr[end]);
        start++;
        end--;
   }
}

void printarray(int arr[],int n){
    for(int i = 0;i<n;n++){
        cout<<arr[i];

    }
}

int main(){
     
     int arr[6]={4,5,6,7,8,9};
     int brr[5]={5,6,7,8,9};

     reverse(arr,6);
     reverse(brr,5);

     printarray(arr,6);
     printarray(brr,5);
}