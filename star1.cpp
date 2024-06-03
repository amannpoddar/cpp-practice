#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    // n = 4
    while(row<=n){
        int col=row;
        while(col<=n){  // stars
           cout << "*";
           col++;
        }
        cout << endl;
        row++;
    }
}