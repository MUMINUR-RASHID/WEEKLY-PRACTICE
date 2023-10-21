#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<int,int>mp;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                int x;
                cin>>x;
                mp[x]+=j;
            }
        }
        vector<pair<int,int>>vp;
        vp.clear();
        for(auto v:mp)
        {
            vp.push_back({v.second,v.first});
        }
        sort(vp.begin(),vp.end());
        for(auto v:vp)
        {
            cout<<v.second<<" ";
        }
        cout<<endl;
        
    }
}