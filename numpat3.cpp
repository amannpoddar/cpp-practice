#include<iostream>
using namespace std;

int main(){
    int row=1,n;
    cin>>n;

    while(row<=n){
        int col=row;
        while(col<=n){
            cout << col-row+1 << " ";
            col++;
        }        
        int star = 2*(row-1);
        while(star){
            cout << "*" << " ";
            star--;
        }
        col=row;
        while(col<=n){
            cout<<n-col+1<<" ";
            col++;
        }
            cout << endl;
            row++;
    }
}