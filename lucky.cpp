#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int r = n%10;
    int q = n/10;
    if(r==0){
        cout << "YES";
    }
    else if(q%r==0 || r%q==0)
        cout << "YES";
    else
        cout << "NO";    
}