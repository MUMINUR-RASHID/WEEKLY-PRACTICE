#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string k="";
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                k+=s[i-1];
            }
        }
        if(k[k.size()-1]!=s[n-1]) k+=s[n-1];
        if(k=="meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

/*

s.erase(unique(s.begin(),s.end()),s.end());

*/