#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    int count = 1;
    cin >> n;

    while(row<=n){
        int space=n-row;
        while(space){
            cout << "  ";{
                space--;
            }
        }
        int col=1;
        while(col<=row){
            cout<< count << " ";
            count++;
            col++;

        }
        cout << endl;
        row++;
    }
}