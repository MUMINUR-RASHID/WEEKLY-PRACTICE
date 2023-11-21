/*
                           بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

              ____    ____ __     __ ____    ____ _____ ____  _____
             |_   \  /   _|  |   |  |_   \  /   _|_   _|_   \|_   _|
               |   \/   | |  |   |  | |   \/   |   | |   |   \ | |
               | |\  /| | |  |   |  | | |\  /| |   | |   | |\ \| |
              _| |_\/_| |_ \  \_/  / _| |_\/_| |_ _| |_ _| |_\   |_
             |_____||_____| \_____/ |_____||_____|_____|_____|\____|


*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
    ll ans = sqrt(n);
    ll sz;
    if (ans * ans == n)
    {
        sz = (2 * v.size()) - 1;
    }
    else
    {
        sz = (2 * v.size());
    }
    if(k>sz) cout<<-1<<endl;
    else
    {
        ll res=min(k,sz-k);
        if(res==k) cout<<v[k-1]<<endl;
        else cout<<n/v[sz-k]<<endl;
    }
    return 0;
}