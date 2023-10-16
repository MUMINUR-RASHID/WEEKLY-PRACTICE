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
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a = a ^ x;
        }
        if (n % 2 == 1)
        {
            cout << a << endl;
        }
        else
        {
            if (a == 0)
                cout << 0 << endl;
            else
                cout << -1 << endl;
        }
    }
}