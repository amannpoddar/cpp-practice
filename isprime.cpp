#include<iostream>
using namespace std;

//1 - Prime no.
//0 - Not Prime no.

bool isPrime(int n){

    for(int i=2; i<n; i++){

        //divide hgya, not a prime no.
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cin >> n;

    if(isPrime(n)){
        cout << "Is a Prime Number";
    }
    else
        cout << "Is not a Prime Number";
    return 0;
}