#include<iostream>
using namespace std;

int main(){

    unsigned int n;
    cin >> n;
    int count = 0;
    while(n!=0){

        //checking last digit
        if(n&1) {
            count++;
        }
        n = (n>>1);
    }       
    cout << count;
    
}