#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll q;
        cin >> q;
        map<ll,pair<ll,ll>>v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if(v.find(x)==v.end())
            {
                v[x].first=i;
            v[x].second=i;
            }
            else v[x].second=i;
            
        }
        while (q--)
        {
            ll a, b;
            cin >> a >> b;
            if (v.find(a)==v.end()||v.find(b)==v.end())
                cout << "NO" << endl;
            else
            {
                bool an = false;
                if (v[a].first<v[b].first||v[a].first<v[b].second)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
}