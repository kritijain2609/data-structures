#include <iostream>
using namespace std;

int sum(int arr[],int n){
    int sum=0;
    for(int i=0; i<n;i++){
         sum = sum+arr[i];
     
        }
        return sum;
}



int main(){
    cout <<"enter size";
    int size;
    cin>>size;
    cout <<"enter the array elements";
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<sum(num,size);
}