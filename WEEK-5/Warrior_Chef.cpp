/*
#include<bits/stdc++.h>
using namespace std;





int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,h;
        cin>>n>>h;
        vector<long long>v;
        long long s=0;
        for(int i=0;i<n;i++)
        {
            long long x; cin>>x;
            v.push_back(x);
            s+=x;
        }
        sort(v.begin(),v.end());
        if(s<h) cout<<0<<endl;
        else
        {
            long long r;
            int i=0;
            while(s>=h)
            {
                s=s-v[i];
                r=v[i];
                i++;
            }
            cout<<r<<endl;
        }
    }
    return 0;
}
*/

///Binary Search

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool is_pos(ll h,vector<ll>v,ll s)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=h)
        {
            return true;
        }
        else if(v[i]<s)
        {
            s-=v[i];
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll l=0,r=v[0];
        int an;
        while(l<=r)
        {
            ll h=l+(r-l)/2;
            if(is_pos(h,v,s))
            {
                an=h;
                r=h-1;
            }
            else
            {
                l=h+1;
            }
        }
        cout<<an<<endl;


    }
}
