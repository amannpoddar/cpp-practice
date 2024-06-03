#include<bits/stdc++.h>
using namespace std;

int main(){
    float x;
    cin >> x;

    int y = (int)x;
    if(x-y ==0)
        cout << "int " << y;
    else
        cout << "float " << y << " " << fixed << setprecision(3) << x-y;
    return 0;
}