#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = (x % 2);
        }
        int ev = 0;
        int od = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != v[i] && v[i] == 1)
            {
                od++;
            }
            else if (i % 2 != v[i] && v[i] == 0)
            {
                ev++;
            }
        }
        if (ev == od)
            cout << ev << endl;
        else
            cout << -1 << endl;
    }
}