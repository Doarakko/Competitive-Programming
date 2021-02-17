#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int a, b;
    cin >> a >> b;
    cout << max(a + b, max(a - b, a * b)) << endl;
}