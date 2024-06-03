#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n,a,b,dig,num,sum2=0;
    cin >> n >> a >> b;


    for(int i=1; i<=n; i++){
        int sum = 0;
        num=i;
        while(num){
            dig = num%10;
            num = num/10;
            sum += dig;
        }
        if(sum <= b && sum >= a) sum2 += i;
    }
    cout << sum2; 
}
