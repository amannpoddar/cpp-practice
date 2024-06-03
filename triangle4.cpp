#include<iostream>
using namespace std;

int main(){
    int n, i=1,k=0;

    cin >> n;
    while(i<=n){
        int j=1;
        // int value= i;
        while(j<=i){
            // cout << value << " ";
            // value++;
            cout << k+j;
            k++;
            j++;
        }
        cout << endl;
        i++;
    }
}
