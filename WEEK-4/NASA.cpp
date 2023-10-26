#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 35000; i++)
    {
        string s = to_string(i);
        string tp = s;
        reverse(s.begin(), s.end());
        if (tp == s)
        {
            v.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        long long int cn = 0;

        for (int i = 0; i < n; i++)
        {
            mp[ar[i]]++;
            for (auto vl : v)
            {
                
                cn += mp[vl ^ ar[i]];
            }
        }
        cout << cn << endl;
    }
}