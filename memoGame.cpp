#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int a,b,k; cin >> a >> b >> k;
    if(a>0 && b>0 && k>0){
        if(a%k == 0 && b%k == 0)
            cout << "Both" << endl;
        else if(a%k == 0 && b%k !=0)
            cout << "Memo" << endl;
        else if(a%k != 0 && b%k ==0)
            cout << "Momo" << endl;
        else if(a%k != 0 && b%k !=0)
            cout << "No One" << endl;
    }
    
}