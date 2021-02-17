#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;

    int pre, x;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i > 0 && x < pre)
        {
            sum += pre - x;
            x = pre;
        }
        pre = x;
    }
    cout << sum << endl;
}
