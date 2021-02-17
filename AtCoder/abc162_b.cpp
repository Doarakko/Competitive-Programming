#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;

    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 15 == 0)
        {
            continue;
        }
        else if (i % 3 == 0)
        {
            continue;
        }
        else if (i % 5 == 0)
        {
            continue;
        }
        sum += i;
    }
    cout << sum << endl;
}