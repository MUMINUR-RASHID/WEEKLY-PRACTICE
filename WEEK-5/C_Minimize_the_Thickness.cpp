#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        ll total=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            total+=v[i];
        }
        ll sum=0;
        ll len_cn=0;
        ll ans=n;

        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            len_cn++;
            
            if(total%sum==0)
            {
                ll sub_an=len_cn;
                ll sub_sum=0;
                ll sub_cn=0;
                for(int j=i+1;j<n;j++)
                {
                    sub_sum+=v[j];
                    sub_cn++;
                    if(sub_sum==sum)
                    {
                        sub_an=max(sub_an,sub_cn);
                        sub_sum=0;
                        sub_cn=0;
                    }
                }
                if(sub_sum==0)
                ans=min(sub_an,ans);
                
            }
           
        }
        cout<<ans<<endl;

    }
}