#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>vp1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vp1.push_back({x,i});
        }
        vector<pair<int,int>>vp2;
        for(int i=0;i<n;i++)
        {
            int y;
            cin>>y;
            vp2.push_back({y,i});
        }
        sort(vp1.begin(),vp1.end());
        sort(vp2.begin(),vp2.end());
        int vp[n];
        for(int i=0;i<n;i++)
        {
            vp[vp1[i].second]=vp2[i].first;
        }
        for(auto v:vp) cout<<v<<" ";
        cout<<endl;

    }
}