#include<iostream>
using namespace std;
int main(){
    int num;
    int prod = 1, sum = 0;

    cout << "Enter any number: ";
    cin >> num;

    while(num!=0){
        int digit = num % 10;
        prod *= digit;
        sum += digit;

        num = num/10;
    }
    int answer = prod - sum;
    cout << answer;
}