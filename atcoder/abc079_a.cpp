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
    string s;
    cin >> s;
    if (s[0] == s[1] && s[1] == s[2] || s[1] == s[2] && s[2] == s[3]) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
