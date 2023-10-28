#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ar[n];
        vector<pair<ll, ll>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar, ar+n, greater<ll>());
        for (ll i = 0; i < n;)
        {
            ll j = i;
            while (i < n && ar[i] == ar[j])
            {
                i++;
            }
            v.push_back({ar[j], i - j});
        }
        
        ll an = v[0].second;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i].first + 1 == v[i - 1].first)
            {
                an = an + max(v[i].second - v[i - 1].second, 0ll);
            }
            else
            {
                an = an + v[i].second;
            }
        }
        cout << an << endl;
    }
}