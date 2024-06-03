#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n,rem,rev=0; cin >> n;
    int val = n;
    while(n>0){
        rem = n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    if(val==rev){
        cout << rev << endl << "YES";
    }
    else
        cout << rev << endl << "NO";
}