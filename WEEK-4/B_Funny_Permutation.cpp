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
        int m = (n / 2) + 1;
        if (n == 3)
            cout << "-1" << endl;
        else
        {
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
            }
            for (int i = m - 1; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}