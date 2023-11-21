/*
                           بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

              ____    ____ __     __ ____    ____ _____ ____  _____
             |_   \  /   _|  |   |  |_   \  /   _|_   _|_   \|_   _|
               |   \/   | |  |   |  | |   \/   |   | |   |   \ | |
               | |\  /| | |  |   |  | | |\  /| |   | |   | |\ \| |
              _| |_\/_| |_ \  \_/  / _| |_\/_| |_ _| |_ _| |_\   |_
             |_____||_____| \_____/ |_____||_____|_____|_____|\____|


*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = __gcd(a, b);
        bool flag=true;
        while(b>1)
        {
            if(ans==1)
            {
                flag=false;
                break;
            }
            b/=ans;
            ans=__gcd(a,b);
        }
       
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}