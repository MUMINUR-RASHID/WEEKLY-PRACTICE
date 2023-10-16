#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s="Yes";
        while(s.size()<=53)
        {
            s+=s;
        }
        bool f=false;
        int j=0;
        string k="";
        string p;
        cin>>p;
        while(j<=52)
        {
            k+=s[j];
            if(j>=p.size()-1)
            {
                if(k==p) 
                {
                    f=true;
                    break;
                }
                k.erase(0,1);
            }
            j++;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}