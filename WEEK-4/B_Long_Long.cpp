#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll s=0;
        ll nc=0;
        ll an=0;
        for(int i=0;i<n;i++)
        {
            ll x; cin>>x;
            if(x<0) 
            {
                nc++;
                s+=(x*-1);
            }
            else if(x>0)
            {
                s+=x;
                if(nc!=0)
                {
                    an++;
                    nc=0;
                }
                
            }
        }
        if(nc) an++;
        cout<<s<<" "<<an<<endl;
    }
    return 0;
}