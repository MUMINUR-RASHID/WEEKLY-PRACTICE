#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,l;
        cin>>n>>l;
        
        vector<int>v[n];
        
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<s.size();j++)
            {
                v[i].push_back(s[j]-'a');
            }
        }
        int mi=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int d=0;
                for(int k=0;k<l;k++)
                {
                    d+=abs(v[i][k]-v[j][k]);
                }
                mi=min(mi,d);
            }
        }
        cout<<mi<<endl;
    }
}