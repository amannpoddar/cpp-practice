#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin >> s;

    int i=0,ok=1;
    while(i<s.size()){
        if(i+2<s.size() && s.substr(i,3) == "144") i+=3;
        else if(i+1<s.size() && s.substr(i,2) == "14") i+=2;
        else if(s[i]=='1') i++;
        else{
            ok=0; break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}