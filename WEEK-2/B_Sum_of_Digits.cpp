#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool l=true;
    long long int n;
    int c=0;
    if(s.size()==1) cout<<c<<endl;
    else
    {
        while(l)
        {
         n=0;
        for(int i=0;i<s.size();i++)
        {
            n+=s[i]-'0';
        }
        c++;
        s=to_string(n);
        if(s.size()==1) l=false;
        }
        cout<<c<<endl;
    }
    return 0;
}