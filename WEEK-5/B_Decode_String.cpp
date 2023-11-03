#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string an="";
        for(int i=n-1;i>=0;i--)
        {
            string p="";
            if(s[i]=='0')
            {
                
                p+=s[i-2];
                p+=s[i-1];
                int m=stoi(p);
                an+=char('a'+m-1);
                i-=2;
            }
            else
            {
                p+=s[i];
                int m=stoi(p);
                an+=char('a'+m-1);
            }
        }
        reverse(an.begin(),an.end());
        cout<<an<<endl;
    }
}