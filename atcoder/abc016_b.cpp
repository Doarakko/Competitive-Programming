#include <iostream>
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

using namespace std;
using ll = long long;

int main(int argc, const char *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c && a - b == c)
    {
        cout << '?' << endl;
    }
    else if (a + b == c && a - b != c)
    {
        cout << '+' << endl;
    }
    else if (a + b != c && a - b == c)
    {
        cout << '-' << endl;
    }
    else if (a + b != c && a - b != c)
    {
        cout << '!' << endl;
    }
}
