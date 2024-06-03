#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    double n,k,a; cin >> n >> k >> a;
    // double res = (n*k)/a;
    double res = (n/a)*(k/a);
    long long res2 = res;

    if(res2<=2147483647){
        cout << "int";
    }
    else if(res > res2){
        cout << "double";
    }
    else
        cout << "long long";

}
// 2147483647 249010911 249010911
// 86294906 292379617 104468026