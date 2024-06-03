#include<iostream>
using namespace std;

int main(){
    int n,row=1;

    cin >> n;
    while(row<=n){
        int col=1;
        char start= 'A'+row-1;
        while(col<=n){
            cout<<start;
            start++;
            col++;
        }
        cout<< endl;
        row++;
    }
}