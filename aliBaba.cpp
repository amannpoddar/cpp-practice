#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    // +,-,*
    int a,b,c,d;cin >> a >> b >> c >> d;
    if(a+b-c == d) cout << "YES";
    else if(a+(b*c) == d) cout << "YES";
    else if(a-(b*c) == d) cout << "YES";
    else if(a-b+c == d) cout << "YES";
    else if((a*b)+c == d) cout << "YES";
    else if((a*b)-c == d) cout << "YES";
    else cout << "NO";
}