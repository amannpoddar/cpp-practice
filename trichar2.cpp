#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin >> n;

    while(row<=n){
        int col=1;
        while(col<=row){
            char ch= 'A'+row+col-2;
            cout << ch;
            col++;
    }
    cout << endl;
    row++;
    }
}