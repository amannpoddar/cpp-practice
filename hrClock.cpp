#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int k,h=21,m=0; cin >> k;
    
    while (k--)
    {
        m++;
        if(m == 60){
            m = 0;
            h++;
        }
    }
    cout << h << ":";
    if(m<=9) cout << '0';
    cout << m;
    
}