#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_pos(ll h,vector<ll>v,ll a)
{
    ll sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>h)
        {
            sum+=(v[i]-h);
            if(sum>=a)
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
    return true;
}
int main()
{
    ll n,a;
    cin>>n>>a;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<ll>());
    ll l=0,r=LLONG_MAX;
    ll an;
    while(l<=r)
    {
        ll h=l+(r-l)/2;
        if(is_pos(h,v,a))
        {
            r=h-1;
        }
        else
        {
            an=h;
            l=h+1;
        }
    }
    cout<<an<<endl;
}