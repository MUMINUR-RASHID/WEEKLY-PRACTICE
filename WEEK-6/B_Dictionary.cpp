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
    map<string, int> mp;
    int p=1;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 'a'; j <= 'z'; j++)
        {
            if(i!=j)
            {
                string k="";
            k+=i;
            k+=j;
            mp[k]=p;
            p++;
            }
            
        }
    }
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        cout<<mp[s]<<endl;
    }
    return 0;
}