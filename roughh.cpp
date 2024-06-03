#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1; 

signed main() {
  ios::sync_with_stdio(false); cin.tie(NULL);
  int n,countEven=0,countOdd=0,countPos=0,countNeg=0;
  int t; cin >> t;
  while (t--) {
    cin >> n;
    if(n%2==0)
      countEven++;
    if(n%2!=0)
      countOdd++;
    if(n<0)
      countNeg++;
    if(n>0)
      countPos++;      
  }
  cout << "Even: " << countEven << endl;
  cout << "Odd: " << countOdd << endl;
  cout << "Positive: " << countPos << endl;
  cout << "Negative: " << countNeg << endl;
}