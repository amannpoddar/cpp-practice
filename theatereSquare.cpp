#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n,m,a;
    cin >> n >> m >> a;

    int height = (n+a-1)/a;
    int width = (m+a-1)/a;

    cout << height*width;
}