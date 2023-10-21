#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        string s;
         cin>>s;
        map<int,char>mc;
        bool tem=true;
        for(int i=0;i<n;i++)
        {
            if(mc.find(a[i])==mc.end()) mc[a[i]]=s[i];
            else if(mc[a[i]]!=s[i])
            {
                tem=false;
                break;
            }
        }
        if(tem) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}