#include <iostream>
using namespace std;

bool search(int arr[],int n,int key){
    
    for(int i=0; i<n;i++){
         if (arr[i]==key){
            return 1;
         }
     
        }
        return 0;
}

int main(){
    int arr[10]={20,12,3,4,5,6,78,0,67,53};
    int key;
    cin>>key;

    bool found= search(arr,10,key);
    if (found){
        cout<<"key is present";
    }
    else {
        cout<<"key is absent";
    }
}