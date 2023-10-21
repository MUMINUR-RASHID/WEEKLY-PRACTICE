#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<string,int>mp;
        vector<string>vs;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            vs.push_back(s);
            mp[s]++;
        }
        long long int cn=0;
        for(auto v:vs)
        {
            string temp1=v;
            for(char i='a';i<='k';i++)
            {
                temp1[0]=i;
                if(temp1!=v&& mp.find(temp1)!=mp.end())
                {
                    cn+=mp[temp1];
                }
            }
            string temp2=v;
            for(char i='a';i<='k';i++)
            {
                temp2[1]=i;
                if(temp2!=v&& mp.find(temp2)!=mp.end())
                {
                    cn+=mp[temp2];
                }
            }

        }
        cout<<cn/2<<endl;
    }
}