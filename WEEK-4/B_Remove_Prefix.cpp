#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>mp;
        ll an=0;
        for(ll i=1;i<=n;i++)
        {
            ll x; cin>>x;
            if(mp.find(x)==mp.end()) mp[x]=i;
            else
            {
                an=max(an,mp[x]);
                mp[x]=i;
            }
        }
        cout<<an<<endl;
    }
}