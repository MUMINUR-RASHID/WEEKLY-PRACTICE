#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }
        int ma=INT_MIN;
        for(auto v:mp)
        {
            ma=max(v.second,ma);
        }
        sort(v.begin(),v.end());
        pair<int,int>p={1,v[0]};
        for(int i=1;i<n;i++)
        {
            if(abs(v[i]-p.second)>1)
            {
                int m=p.first+1;
                p={m,v[i]};

            }
            else if((v[i]-p.second)==1)
            {
                int m=p.first;
                p={m,v[i]};
            }
        }
        cout << max(p.first,ma) << endl;
    }
}