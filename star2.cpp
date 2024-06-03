#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    cin>>n;

    while(row<=n){
        int space = row-1;
        while(space){
            cout << " ";
            space--;
        }
        int col=row;
        while(col<=n){
            cout << "*";
            col++;
        }
        cout<< endl;
        row++;
    }
}