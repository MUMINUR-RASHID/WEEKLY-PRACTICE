#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,p;
        cin>>n>>p;
        long long int s=0;
        map<int,bool>mp;
        long long int ma=0;
        for(int i=0;i<n;i++)
        {
            long long int x; cin>>x;
            mp[x]=true;
            ma=max(x,ma);
            s+=x;
        }
        long long int k=s;
        s=s+p;
        bool f=false;
        for(long long int i=1;k<=s;i++)
        {
            if(k==s&&i>=ma)
            {
                f=true;
                break;
            }
            if(mp.find(i)==mp.end())
            {
                k+=i;
                mp[i]=true;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}