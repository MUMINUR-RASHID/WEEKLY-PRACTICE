#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>mp;
        vector<string>vs;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            vs.push_back(s);
            mp[s]=1;
        }
        string an="";

        for(auto v:vs)
        {
            string x=v;
            string y="";
            string k=x;
            int l=x.size()-1;
            int j=0;
            bool flag=false;
            while(j<l)
            {
                y+=k[j];
                x.erase(0,1);
                if(mp.find(y)!=mp.end()&&mp.find(x)!=mp.end())
                {
                    flag=true;
                    break;
                }
                j++;
            }
            if(flag) an+="1";
            else an+="0";
        }
        cout<<an<<endl;
    }
}