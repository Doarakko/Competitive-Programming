#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char *argv[])
{
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }

    if (sum % 9 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
