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
        int a,b,c,d; cin >> a >> b >> c >> d;

        int mx1 = max({a,b,c,d});
        int mx2;

        if(mx1==a)
            mx2=max({b,c,d});
        else if(mx1==b)
            mx2=max({a,c,d});
        else if(mx1==c)
            mx2=max({a,b,d});
        else
            mx2=max({a,b,c});
        
        int w1=max(a,b);
        int w2=max(c,d);

        int wm1,wm2;
        if(w1>w2){
            wm1=w1; wm2=w2;
        }
        else{
            wm2=w1; wm1=w2;
        }

        if(wm1==mx1 && wm2==mx2) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}