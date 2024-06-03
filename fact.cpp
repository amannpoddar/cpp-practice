#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t,n,fact=1,temp; cin >> t;
    while (t--) {
        cin >> n;
        for(int i=1; i<=n; i++){
            fact = fact*i;
            temp = fact;
        }
        fact = 1;
        if(n==0) temp = 1;
        cout << temp << endl;   
    }
}