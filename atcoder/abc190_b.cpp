#include <iostream>
using namespace std;

int main()
{
    int n, s, d;
    cin >> n >> s >> d;

    int x, y;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x < s && y > d)
        {
            ok = true;
        }
    }
    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}