#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,6,6};
    int hashmap[10];

    for(int i=0; i<10; i++){
        hashmap[i] = 0;
    }
    for(int i=0; i<6; i++){
        hashmap[arr[i]]++;
    }
    for(int i=0; i<10; i++){
        if(hashmap[i]>1){
            cout << "Duplicate " << i << endl;
        } 
        else if(hashmap[i] == 1){
            cout << "Unique " << i << endl;
        }
    }
}