/*        
                           بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ     

              ____    ____ __     __ ____    ____ _____ ____  _____ 
             |_   \  /   _|  |   |  |_   \  /   _|_   _|_   \|_   _|
               |   \/   | |  |   |  | |   \/   |   | |   |   \ | |
               | |\  /| | |  |   |  | | |\  /| |   | |   | |\ \| | 
              _| |_\/_| |_ \  \_/  / _| |_\/_| |_ _| |_ _| |_\   |_ 
             |_____||_____| \_____/ |_____||_____|_____|_____|\____|


*/
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        ll cn1=0;
        ll n=s2.size();
        ll m=s1.size();
        for(ll i=0;i<n;i++)
        {
            if(s2[i]=='a')
            {
                cn1++;
            }
        }
        if(s2=="a") cout<<1<<endl;
        else if(cn1) cout<<-1<<endl;
        else cout<<fixed<<setprecision(0)<<pow(2,m)<<endl;
    }
    return 0;
}