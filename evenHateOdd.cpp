#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int v[n];

        for(int i=0; i<n; i++) cin >> v[i];

        if(n&1)
            cout << "-1";
        
        int needed = n/2, cnt = 0;

        for(int i=0; i<n; i++) cnt += v[i]&1;

        cout << abs(needed-cnt) << endl; 
    }
}