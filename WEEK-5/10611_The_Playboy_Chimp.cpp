#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    vector<int> vq;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        vq.push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int l = distance(v.begin(), lower_bound(v.begin(), v.end(), vq[i]));
        int u = distance(v.begin(), upper_bound(v.begin(), v.end(), vq[i]));
        if (v[l] == vq[i] && (l - 1) >= 0)
            cout <<v[l - 1] <<" ";
        else if (v[l] != vq[i])
            cout <<v[l-1] <<" ";
        else
            cout <<"X"<<" ";

        if (u == n)
            cout << "X" << endl;
        else
            cout << v[u] << endl;
    }
}