#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int x;
    set<int> st;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        st.insert(x);
    }

    if (st.size() == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}