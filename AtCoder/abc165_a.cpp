#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int k, a, b;
    cin >> k >> a >> b;

    if ((b / k) * k >= a)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "NG" << endl;
    }
}
