#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '7')
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}