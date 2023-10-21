#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        map<char,int>mp;
        int cn=0;
        for(auto c:s)
        {
            if(c>='A'&&c<='Z')
            {
                mp[c]++;
            }
            else
            {
                if(mp[c-32]!=0) 
                {
                    cn++;
                    mp[c-32]--;
                }
                else mp[c]++;
            }
        }
       
        for(auto v:mp)
        {
            if(k==0) break;
            k-=(v.second/2);
            if(k<=0) 
            {
                cn+=((v.second/2)+k);
                break;
            }
            else
            {
                cn+=(v.second/2);
            }

        }
        cout<<cn<<endl;
    }
}