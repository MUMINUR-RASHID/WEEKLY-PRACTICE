#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v1(n);
        vector<int>v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        vector<int>d(n);
        for(int i=0;i<n;i++)
        {
            cin>>v2[i];
        }
        d[0]=(v2[0]-v1[0]);
        for(int i=1;i<n;i++)
        {
            d[i]=min(v2[i]-v2[i-1],v2[i]-v1[i]);
        }
        for(auto vl:d) cout<<vl<<" ";
        cout<<endl;
    }
}