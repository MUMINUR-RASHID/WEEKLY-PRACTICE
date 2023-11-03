#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<pair<char, int>> vp;
        vp.push_back({s[0], 1});
        for (int i = 1; i < s.size() - 1; i++)
        {
            if ((s[i] >= s[0] && s[i] <= s[s.size() - 1])||(s[i] <= s[0] && s[i] >= s[s.size() - 1]))
            {
                vp.push_back({s[i], i + 1});
            }
        }
        int si = 1;
        int ei = vp.size();
        vp.push_back({s[s.size() - 1], s.size()});
        if (s[0] >= s[s.size() - 1])
            sort(vp.begin() + si, vp.begin() + ei, greater<pair<char, int>>());
        else
            sort(vp.begin() + si, vp.begin() + ei);

        int su = 0;
        for (int i = 1; i < vp.size(); i++)
        {
            su += abs(vp[i - 1].first - vp[i].first);
        }
        cout << su << " " << vp.size() << endl;
         for(auto v:vp) cout<<v.second<<" ";
         cout<<endl;
    }
}
