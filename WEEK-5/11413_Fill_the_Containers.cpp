#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll is_valid(vector<ll> v, ll cp)
{
    ll cn = 1;
    ll s = 0;
    
    for (ll i = 0; i < v.size(); i++)
    {
        if(v[i]>cp)
        {
            cn=LLONG_MAX;
            break;
        }
        s += v[i];
        if (s> cp)
        {
            cn++;
            s = v[i];
        }
    }
    return cn;
}
int main()
{
    ll n, co;
    while (cin >> n >> co)
    {
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // sort(v.begin(),v.end());
        ll l = 1;
        ll r = LLONG_MAX;
        ll an;
        while (l <= r)
        {
            ll cp = l + ((r - l) / 2);
            ll cn = is_valid(v, cp);
            if (cn <= co)
            {
                an = cp;
                r = cp - 1;
            }
            else
            {
                l = cp + 1;
            }
        }
        cout << an << endl;
    }
}