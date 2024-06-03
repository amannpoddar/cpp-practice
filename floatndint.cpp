#include <bits/stdc++.h>
using namespace std;

int main()
{

    // ceil(n) -> smallest integer just greater than n
    // floor(n) -> greatest integer just smaller than n

    long double n;
    cin >> n;

    if (ceil(n) == floor(n))
    {
        cout << "int " << n << endl;
    }
    else
    {
        cout << "float " << floor(n) << n - floor(n) << endl;
    }

    return 0;
}
