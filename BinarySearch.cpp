#include<iostream>
using namespace std;

int binarySearch(int arr[],int key, int size){

    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;

    while(start<=end){

        if(arr[mid] == key){
            return mid;
        }
        
        if(key>arr[mid])
            start = mid+1;
        else
            end = mid-1;
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int key;
    int arr[] = {21,31,41,51,61,71,89};

    int size = sizeof(arr)/sizeof(int);
    cout << "Enter the key you want to search: ";
    cin >> key;

    int bs = binarySearch(arr,key,size);
    cout << " Index of " << key << " is: " << bs;
    return 0;
}