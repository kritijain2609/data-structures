#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    
    int start =0;
    int end = size-1;
    
    int mid = (end+start)/2;
    
    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        
        if (key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        
        mid = (start + end)/2;
        
    }
    return -1;
}

int main(){
    
    int even[8]={2,4,6,8,10,12,13};
    int odd[5]={3,8,11,14,16};
    
    int evenbinary=binarysearch(even,8,12);
    cout<<evenbinary<<endl;
    
    int oddbinary=binarysearch(odd,5,20);
    cout<<oddbinary;
    
}