#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin >> n;
    for(int i=2; i<=n; i++){
        bool prime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                prime = false;
                break;
            }
        }
        if(prime){
            cout << i << " ";
        }
    }
}