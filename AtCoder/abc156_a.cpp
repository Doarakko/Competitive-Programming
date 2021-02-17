#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int n, r;
    cin >> n >> r;
    if (n >= 10)
    {
        r -= 100 * (10 - n);
    }
    cout << r << endl;
}
