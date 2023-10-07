#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long int a[n+2];
    long long int s=0;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        s+=x;
        a[i]=s;
    }
    a[0]=0;
    a[n+1]=0;
    int q; cin>>q;
    while(q--)
    {
        int u,v;
        cin>>u>>v;
        cout<<a[v+1]-a[u]<<endl;

    }
    return 0;
}