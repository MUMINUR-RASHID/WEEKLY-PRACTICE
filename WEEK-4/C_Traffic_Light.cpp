#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char ch; cin>>ch;
        string s; cin>>s;
        s+=s;
        int j=0;
        int i=-1;
        int an=0;
        while(j<s.size())
        {
            if(s[j]==ch&&i==-1)
            {
                i=j;
            }
            if(s[j]=='g'&&i!=-1)
            {
                an=max(an,(j-i));
               // cout<<i<<j<<" ";
                i=-1;
            }
            j++;
        }
        cout<<an<<endl;
    }
}