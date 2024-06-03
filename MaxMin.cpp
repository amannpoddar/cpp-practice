#include<iostream>
#include <climits>
using namespace std;

int getMin(int arr[], int n){
    int minV = INT_MAX;
    
    for(int i=0; i<n; i++){
        minV = min(minV,arr[i]);
    }

        // if(arr[i] < min){
        //     min = arr[i];
        // }

    // returning min value
    return minV;
}

int getMax(int arr[], int n){
    int maxV = INT_MIN;
    
    for(int i=0; i<n; i++){
        maxV = max(maxV,arr[i]);
    }

        // if(arr[i] > max){
        //     max = arr[i];
        // }
        
    // returning max value
    return maxV;
}

int main(){

    int size;
    cin >> size;
    int arr[100];

    //taking input in array
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Maximum value is " << getMax(arr,size) << endl;
    cout << "Minimum value is " << getMin(arr,size) << endl;

    return 0;
}