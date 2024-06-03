#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[] = {10,15,20,25,78,97};
    int size = sizeof(arr)/sizeof(int);
    int key;

    cout << "Enter the element you want to find: ";
    cin >> key;

    bool find = search(arr,size,key);
    if(find){
        cout << "Your Key is Present";
    }
    else
        cout << "Your key is absent";

    return 0;
}