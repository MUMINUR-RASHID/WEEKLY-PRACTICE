#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 1;
    while (1)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;
        vector<int> ar;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar.push_back(x);
        }
        sort(ar.begin(), ar.end());
        cout << "CASE# " << k++ << ":" << endl;
        while (q--)
        {
            int x;
            cin >> x;

            /* simple apporch
             auto t=lower_bound(ar.begin(),ar.end(),x);
             int p=distance(ar.begin(),t);
             */

            int l = 0, r = n - 1;
            int p=-1;

            //Binary Search

            while (l <= r)
            {
                int m = l + ((r - l) / 2);
                if(ar[m]==x)
                {
                    p=m;
                    r=m-1;
                }
                else if(ar[m]<x)
                {
                    l=m+1;
                }
                else 
                {
                    r=m-1;
                }
            }
            if (p!=-1)
            {
                cout << x << " found at " << p + 1 << endl;
            }
            else
            {
                cout << x << " not found" << endl;
            }
        }
    }
}