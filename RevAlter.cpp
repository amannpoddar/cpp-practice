#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    // int start = 0;
    // int end = size-1;

    for(int i=0; i<size-1; i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }

}
void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main(){

    int arr[] = {10,15,20,25,30,35,40};
    int size = sizeof(arr)/sizeof(int);

    reverseArray(arr,size);
    printArray(arr,size);
    return 0;
}