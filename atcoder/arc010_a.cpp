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
#define vcopy(src, dst) copy(src.begin(), src.end(), back_inserter(dst))
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

void display_vec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}

int binary_search()
{
    int key;
    vector<int> v = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

    int left = -1;
    int right = v.size();

    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;

        if (v[mid] >= key)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    return right;
}

int main(int argc, const char *argv[])
{
    int n, m, a, b, c, ans = -1;
    cin >> n >> m >> a >> b;
    for (int i = 0; i < m; i++)
    {
        if (n <= a)
        {
            n += b;
        }

        cin >> c;
        n -= c;
        if (n < 0 && ans == -1)
        {
            ans = i + 1;
        }
    }

    if (ans == -1)
    {
        cout << "complete" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}
