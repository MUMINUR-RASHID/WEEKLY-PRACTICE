/*        
                           بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ     

              ____    ____ __     __ ____    ____ _____ ____  _____ 
             |_   \  /   _|  |   |  |_   \  /   _|_   _|_   \|_   _|
               |   \/   | |  |   |  | |   \/   |   | |   |   \ | |
               | |\  /| | |  |   |  | | |\  /| |   | |   | |\ \| | 
              _| |_\/_| |_ \  \_/  / _| |_\/_| |_ _| |_ _| |_\   |_ 
             |_____||_____| \_____/ |_____||_____|_____|_____|\____|


*/
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin>>s;
        int p; cin>>p;
        int n=s.size();
        vector<pair<char,int>>vp;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int tmp=s[i]-'a'+1;
            sum+=tmp;
            vp.push_back({s[i],i});
        }

        sort(vp.begin(),vp.end(),greater<pair<char,int>>());
        if(sum<=p) cout<<s<<endl;
        else
        {
            int i=0;
            while(sum>p)
            {
                int tmp=vp[i].first-'a'+1;
                sum-=tmp;
                vp[i].second=-1;
                i++;
            }
            vector<char> an(n);
        for(auto vl:vp)
        {
            if(vl.second!=-1)
            {
                an[vl.second]=vl.first;
            }
        }
        for(auto vl:an)
        {
            if(vl!=0) cout<<vl; 
        }
        cout<<endl;
        }
        
    }
    return 0;
}