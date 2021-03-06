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

// floor(x): truncate

// 2進数変換
// string s = bitset<20>(x).to_string();

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    string s, t;
    cin >> s >> t;
    map<char, char> mp;
    bool flag = true;
    for (int i = 0; i < s.length() && flag; i++)
    {
        if (mp.count(s[i]) == 0)
        {
            for (int j = 0; j < i; j++)
            {
                if (mp[s[j]] == t[i])
                {
                    flag = false;
                }
            }
            mp[s[i]] = t[i];
        }
        else
        {
            if (mp[s[i]] != t[i])
            {
                flag = false;
            }
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
