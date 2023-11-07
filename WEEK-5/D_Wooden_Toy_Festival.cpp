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
            cin >> v[i];
        }
        sort(v.begin(), v.end(),greater<int>());
        int l = 0, r = INT_MAX;
        int an;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int cn = 1;
            int d = abs(v[0] - mid);
            for (int i = 1; i < n; i++)
            {
                if (abs(v[i] - d) > mid)
                {
                    cn++;
                    d = (v[i] - mid);
                }
            }
            if (cn <= 3)
            {
                an = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << an << endl;
    }
}