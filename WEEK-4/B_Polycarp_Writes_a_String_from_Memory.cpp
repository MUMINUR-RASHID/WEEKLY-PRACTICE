#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        vector<int> sr(26,0);
        int an=0;
        int ccn=0;
        int i=0;
        while(i<s.size())
        {
            if(sr[s[i]-'a']==0)
            {
                sr[s[i]-'a']=1;
                ccn++;
            }
            if(ccn==4)
            {
                an++;
                ccn=0;
                sr.assign(26,0);
                i--;
            }
            i++;
        }
        if(ccn) cout<<an+1<<endl;
       else cout<<an<<endl;
    }
}