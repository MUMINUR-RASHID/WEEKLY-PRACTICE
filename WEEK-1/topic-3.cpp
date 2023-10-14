#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pat,txt;
    cin>>txt>>pat;
    int frp[26]={0};
     for(int i=0;i<pat.size();i++)
     {
         frp[pat[i]-'a']++;
     }
    int j = 0;
    int c = 0;
    int i=0;
    int frt[26]={0};
    while (j < txt.size()) {
        frt[txt[j]-'a']++;
        if (j >= pat.size() - 1) 
        {
            bool tmp=true;
            for(int i=0;i<26;i++)
            {
                if(frp[i]!=frt[i])
                {
                    tmp=false;
                    break;
                }
            }
            if(tmp) c++;
            frt[txt[i]-'a']--;
            i++;
        }
        j++;
    }
    cout<<c<<endl;
    return 0;
}