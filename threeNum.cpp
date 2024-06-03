#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int k,s;
    int cnt = 0;
    cin >> k >> s;
    for(int x=0; x<=k; x++){
        for(int y=0; y<=k; y++){
            int z = s -(x+y);
            if(z>=0 && z<=k)
                cnt++;
        }
    }
    cout  << cnt;

}