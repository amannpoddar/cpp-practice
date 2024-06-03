#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t,x,y; cin >> t;
    while (t--) {
        int sum=0;
        cin >> x >> y;
        int minn = min(x,y);
        int maxx = max(x,y);
        for(int i=minn+1; i<maxx; i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout << sum << endl;
    }
}