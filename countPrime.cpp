#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t,cnt=0; cin >> t;
    for(int i=1; i<=t; i++){
        if(t%i==0)
            cnt++;
    }
    if(cnt == 2)
        cout << "Yes";
    else
        cout << "No";
}