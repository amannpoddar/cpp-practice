#include<iostream>
using namespace std;

int main(){
    int a = 5;
    if(true) {
        int b = 5;  // b defined in this scope. we can't access this 'b' outside.
        cout << b << endl;
    }

    int b = 3;
    cout << b; // We can't print here it gives error here.

    //int b = 8; 
    // we can't declare more than one variable in same name.
    int i = 8;
    for(; i < 8; i++){  //In loop when i don't initialize then it will
    // search that variable in outside. but only for looping declaratiion. 
    // bcz it isn't inside the scope means curly braces here.
        cout << "Hi" ;
    }
}