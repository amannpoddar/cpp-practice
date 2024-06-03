#include<iostream>
using namespace std;

int main(){
    float f,c;

    cout << "Enter tempr in Fahrenheit: " << endl;
    cin >> f;

    c=(f-32)*5/9;

    cout << "Temperature in Celsius= " << c << endl;
}