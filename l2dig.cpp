#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    int val = (a*b*c*d)%100;
    if(val<10)
        cout << 0 <<val;
    else
        cout << val;
    return 0;
}
// 434500145 147276606 217842775 236387740