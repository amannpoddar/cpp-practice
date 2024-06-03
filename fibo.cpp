#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int a=0,b=1,ans=0,n,i=2; cin >> n;
    if(n==1){
        cout << "0";
    }
    else if(n==2){
        cout << "1";
    }
    else{
        while(i<n){
            ans=a+b;
            a=b;
            b=ans;
            i++;
        }
        cout << ans;
    }
}