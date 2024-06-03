#include<iostream>
using namespace std;

int main(){
    int row=1,n;
    char count='A';

    cin >> n;

    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<count<< " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}