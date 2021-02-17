#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char *argv[])
{
    int n, x, t;
    cin >> n >> x >> t;

    int ans = n / x * t;
    if (n % x != 0)
    {
        ans += t;
    }
    cout << ans << endl;
}
