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
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        unordered_map<char,int>mp;
        string s; cin>>s;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int cnt=0;
        int sz=0;
        for(auto vl:mp)
        {
            if(vl.second%2==1) cnt++;
            sz++;
        }
        if(!(n%2))
        {
            if(cnt) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else
        {
            if(cnt==1)
            {
                if(sz==1) cout<<2<<endl;
                else cout<<1<<endl;
            }
            else cout<<0<<endl;
        }
    }
    return 0;
}