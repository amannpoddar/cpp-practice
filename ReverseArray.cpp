#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){

    int arr[] = {11,21,31,41,51};
    int brr[] = {11,21,31,41,51,61};

    int size = sizeof(arr)/sizeof(int);
    int bsize = sizeof(brr)/sizeof(int);

    reverseArray(arr,size);
    reverseArray(brr,bsize);

    printArray(arr,size);
    printArray(brr,bsize);
}