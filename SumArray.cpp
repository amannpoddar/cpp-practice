#include<iostream>
using namespace std;


int main(){
    int size,sum=0;
    cout << "Enter Size of Array: ";
    cin >> size;
    int arr[100];

    for(int i=0; i<size; i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}