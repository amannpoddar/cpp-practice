#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    cin >> n;
    while(row<=n){
        char start='A'+n-row;
        int col=1;
        while(col<=row){
            cout << start;
            start++;
            col++;
        }
        cout << endl;
        row++;
    }
}