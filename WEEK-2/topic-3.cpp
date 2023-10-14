#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int k;cin>>k;
    int i=0;
    int j=0;
    int as[26]={0};
    int un=0;
    int an=0;
    while(j<s.size())
    {
        if(as[s[j]-'a']==0)
        {
            as[s[j]-'a']++;
            un++;
        }
        else as[s[j]-'a']++;
        
        if(un==k)
        {
            an=max(an,j-i+1);
        }
        else if(un>k)
        {
            while(un>k)
            {
                as[s[i]-'a']--;
                if(as[s[i]-'a']==0)
                {
                    un--;
                }
                i++;
            }
        }
        j++;
    }
    cout<<an<<endl;
    return 0;
}
