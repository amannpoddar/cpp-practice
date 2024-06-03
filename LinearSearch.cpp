#include<iostream>
using namespace std;

bool search(int arr[],int size, int key){

    for(int i=0; i<size; i++){

    if(arr[i] == key){
        return 1;
    }
    }
    return 0;
}

int main(){

    int arr[10] = {20, -6, 11, 0, 1, 68, -12, 58, 17, 64};
    int key;
    cout << "Enter the Element which you want for search: ";
    cin >> key;

    bool found = search(arr, 10, key);

    if(found)
        cout << "Key is Present";
    else
        cout << "Key is Absent";
    return 0;
}