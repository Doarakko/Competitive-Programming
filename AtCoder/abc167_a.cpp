#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    string s, t;
    cin >> s >> t;
    if (s == t.substr(0, t.length() - 1))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
