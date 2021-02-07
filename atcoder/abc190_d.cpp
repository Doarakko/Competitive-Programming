#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= sqrt(2 * n); i++)
    {
        if (2 * n % i == 0)
        {

            if ((i % 2 == 0 && 2 * n / i % 2 != 0) || (i % 2 != 0 && 2 * n / i % 2 == 0))
            {
                cnt += 2;
            }
        }
    }
    cout << cnt << endl;
}
