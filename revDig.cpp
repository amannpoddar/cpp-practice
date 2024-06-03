#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t,n,rev; cin >> t;
    while (t--) {
        cin >> n;
        if(!n) {
            cout << 0 << endl;
        }
        else {
            while(n){
                rev = n%10;
                n = n/10;
                cout << rev << " ";
            }
            cout << endl;
        }
    }
}