#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;

    int n = max(a, b);
    string s = to_string(min(a, b));
    string ans;
    for (int i = 0; i < n; i++)
    {
        ans += s;
    }
    cout << ans << endl;
}
