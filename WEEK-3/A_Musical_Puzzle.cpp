#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map<string,bool>mp;
        string k="";
        int j=0;
        int cn=0;
        while(j<s.size())
        {
            k+=s[j];
            if(j>=1)
            {
                if(mp.find(k)==mp.end())
                {
                    mp[k]=true;
                    cn++;
                }
                k.erase(0,1);
            }
            j++;
        }
        cout<<cn<<endl;
    }
}