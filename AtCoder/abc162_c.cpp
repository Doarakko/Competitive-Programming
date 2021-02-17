#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int gcd(int x, int y)
{
    int r;

    // 引数チェック
    if (x == 0 || y == 0)
    {
        return 0;
    }

    // ユーグリッドの互除法
    // yで割り切れるまでループ
    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

int main(int argc, const char *argv[])
{
    int k;
    cin >> k;

    int sum = 0, x;
    for (int a = 1; a <= k; a++)
    {
        for (int b = 1; b <= k; b++)
        {
            for (int c = 1; c <= k; c++)
            {
                x = gcd(a, b);
                x = gcd(c, x);
                sum += x;
            }
        }
    }
    cout << sum << endl;
}