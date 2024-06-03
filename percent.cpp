#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    long double x,p; cin >> x >> p;
    cout << fixed << setprecision(2) << p/(1-(x/100)) << endl;
}