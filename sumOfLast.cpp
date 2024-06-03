#include<iostream>
#include<string>
using namespace std;

int main(){

    //Using integer
    // int a,b;
    // cin >> a >> b;
    // cout << (a % 10) + (b % 10) << '\n';

    //Usimg string
    string a,b;
    cin >> a >> b;
    int x = a[a.size() - 1] - '0', y = b[b.size() -1] - '0';
    cout << x + y;
    return 0;
}