#include<iostream>
using namespace std;

//1 - Even
//2 - Odd
bool isEven(int a){

    //odd
    if(a&1){
        return 0;
    }
    //even
    return 1;
}

int main(){
    int num;
    cout << "Enter any Number: ";
    cin >> num;

    if(isEven(num)){
        cout << "Number is Even!";
    }
    else
    cout << "Number is Odd!";
}