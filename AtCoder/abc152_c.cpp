#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, x, curMin = INT_MAX, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        curMin = min(x, curMin);
        if (x == curMin)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
