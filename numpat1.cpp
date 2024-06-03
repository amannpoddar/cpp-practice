#include<iostream>
using namespace std;

int main(){
    int n, row=1;
    cin >> n;
    while(row<=n){
       int space=n-row;
       while(space){
        cout << " ";
        space--;
       }
       int col=row;
       while(col<=n){
            cout << col;
            col++;
       }
       cout << endl;
       row++;

    }
}