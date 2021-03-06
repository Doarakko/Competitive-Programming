#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <climits>

#define F first
#define S second
#define vsort(v) sort((v).begin(), (v).end())
#define vrev(v) reverse((v).begin(), (v).end())


//INT_MAX
//INT_MIN
//LLONG_MAX
//LLONG_MIN
//DBL_MIN
//DBL_MAX
//LDBL_MIN
//LDBL_MAX

using namespace std;
using ll = long long;

int main(int argc, const char * argv[]) {
    vector<int> v(3);
    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    vsort(v);
    int cnt = 3;
    for (int i = 1; i < 3; i++) {
        if (v[i] == v[i-1]) {
            cnt--;
        }
    }
    cout << cnt << endl;
}
