#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    cin >> n;

    while(row<=n){
        int space =n-row;
        while(space){
            cout << " ";
            space = space-1;
        }
        int col=1;
        while(col<=row){
            cout << col;
            col++;
        }
        int start= row-1;
        while(start){
            cout << start;
            start=start-1;
        }
        cout << endl;
        row++;
    }
}