#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n,m,h;
        cin>>n>>m>>h;
        long long int c[n];
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        long long int o[m];
        for(int i=0;i<m;i++)
        {
            cin>>o[i];
        }
        sort(c,c+n,greater<long long int>());
        sort(o,o+m,greater<long long int>());
        long long int ans=0;
        for(int i=0;i<min(n,m);i++)
        {
            ans+=min(c[i],o[i]*h);
        }
        cout<<ans<<endl;
    }
}