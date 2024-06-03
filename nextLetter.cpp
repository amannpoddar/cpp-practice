#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    char C;cin >> C;
    if(C>='a' && C<='z'){
        if(C=='z')
            cout << "a" << endl;
        else
            cout << char(C+1) << endl;    
    }
}