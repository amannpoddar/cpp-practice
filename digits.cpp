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
        while(n>0){
            cout << n%10 << " ";
            n/=10;
        }
        cout << endl;
    }
}