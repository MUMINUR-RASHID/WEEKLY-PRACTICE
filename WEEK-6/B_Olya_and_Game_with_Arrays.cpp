#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v[n];
        for(int i=0;i<n;i++)
        {
            int l; cin>>l;
            while(l--)
            {
                int x; cin>>x;
                v[i].push_back(x);
            }
            sort(v[i].begin(),v[i].end());
        }
        long long int s=0;
        vector<int> mn;
        vector<int> mv;
        for(int i=0;i<n;i++)
        {
            s+=v[i][1];
           mn.push_back(v[i][0]);
            mv.push_back(v[i][1]);
        }
        sort(mv.begin(),mv.end());
        sort(mn.begin(),mn.end());
        cout<<s+mn[0]-mv[0]<<endl;

    }
    return 0;
}