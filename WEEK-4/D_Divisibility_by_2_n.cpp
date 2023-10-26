#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll cn=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            while(x%2==0)
            {
                cn++;
                x/=2;
            }
        }

        if(cn>=n)cout<<0<<endl;
        else
        {
            vector<ll>an;
            for(int i=2;i<=n;i++)
            {
                int tp=i;
                ll cn2=0;
                while(tp%2==0)
                {
                    cn2++;
                    tp/=2;
                }
                if(cn2!=0) an.push_back(cn2);
            }
            sort(an.begin(),an.end(),greater<ll>());
            ll m=0;
            for(int i=0;i<an.size();i++)
            {
                cn+=an[i];
                m++;
                if(cn>=n) break;
            }
            if(cn<n) cout<<-1<<endl;
            else cout<<m<<endl;
        }
    }
}