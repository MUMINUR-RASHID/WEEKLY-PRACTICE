#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int m=n/2;
        int ls=0;
        int hs=0;
        sort(ar,ar+n);
        for(int i=0;i<m;i++)
        {
            ls+=ar[i];
        }
        for(int i=m;i<n;i++)
        {
            hs+=ar[i];
        }
        if(n%2==0) cout<<hs-ls<<endl;
        else cout<<(hs-ls)-ar[m]<<endl;
    }
}