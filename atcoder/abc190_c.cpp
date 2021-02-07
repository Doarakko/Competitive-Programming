#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int a, b;
    vector<pair<int, int> > x(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        x[i].first = a;
        x[i].second = b;
    }

    int k;
    cin >> k;

    int c, d;
    vector<pair<int, int> > y(k);
    for (int i = 0; i < k; i++)
    {
        cin >> c >> d;
        y[i].first = c;
        y[i].second = d;
    }

    int ans = 0, sum = 0;
    set<int> st;
    for (int bit = 0; bit < (1 << k); bit++)
    {
        st.clear();
        sum = 0;
        for (int i = 0; i < k; i++)
        {
            if (bit & (1 << i))
            {
                st.insert(y[i].first);
            }
            else
            {
                st.insert(y[i].second);
            }
        }

        for (int j = 0; j < m; j++)
        {
            if (st.find(x[j].first) != st.end() && st.find(x[j].second) != st.end())
            {
                sum++;
            }
        }

        if (sum > ans)
        {
            ans = sum;
        }
    }

    cout << ans << endl;
}