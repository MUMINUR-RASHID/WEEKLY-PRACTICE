#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_pos(ll h,vector<ll>v,ll w)
{
    ll sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<h)
        {
            sum+=(h-v[i]);
            if(sum>w)
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    return false;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n,w;
        cin>>n>>w;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll l=1, r=LLONG_MAX;
        ll an;
        while(l<=r)
        {
            ll h=l+(r-l)/2;
            
            if(is_pos(h,v,w))
            {
              r=h-1;  
            }
            else
            {
                l=h+1;
                an=h;
            }

        }
        cout<<an<<endl;
    }
}