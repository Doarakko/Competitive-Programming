#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <math.h>
#include <bitset>

#define X first
#define Y second
#define vsort(v) sort(v.begin(), v.end())
#define vrev(v) reverse(v.begin(), v.end())
#define vmax_p(v) max_element(v.begin(), v.end())
#define vmin_p(v) min_element(v.begin(), v.end())
#define vmax_idx(v) distance(v.begin(), vmax_p(v))
#define vmin_idx(v) distance(v.begin(), vmin_p(v))
#define P pair

// stoi(s): string to int
// stod(s): string to double

// INT_MAX
// INT_MIN
// LLONG_MAX
// LLONG_MIN
// DBL_MIN
// DBL_MAX
// LDBL_MIN
// LDBL_MAX

// A-Z: 65~90
// a-z: 97~122
// |a-z| = 26

// 2進数変換
// string s = bitset<20>(x).to_string();

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    vector<P<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].X >> v[i].Y;
    }

    double max = -1, d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d = sqrt(pow(v[i].X - v[j].X, 2) + pow(v[i].Y - v[j].Y, 2));
            if (d > max)
            {
                max = d;
            }
        }
    }

    cout << setprecision(-3) << max << endl;
}
