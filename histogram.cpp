#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t,n;
    char ch; cin >> ch >> t;
    while (t--) {
        cin >> n;
        for(int i=0; i<n; i++){
            cout << ch << " ";
        }
        cout << endl;
    }
}