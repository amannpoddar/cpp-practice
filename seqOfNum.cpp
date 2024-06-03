#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    while (1) {
    int n,m,sum=0;
        cin >> n >> m;
        int minn = min(n, m);
        int maxx = max(n, m);
        if(n<=0 || m<=0){
            break;
        }
        else{
            for(int i=minn; i<=maxx; i++){
                sum+=i;
                cout << i << " ";
            }
            cout << "sum =" << sum;
            cout << endl;
        }
    }
}