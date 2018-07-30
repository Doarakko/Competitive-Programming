#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    ll x, t;
    cin >> x >> t;
    if (x - t >= 0) {
        cout << x - t << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
