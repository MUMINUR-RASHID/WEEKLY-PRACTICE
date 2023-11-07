#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
         
        
        int a[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }
        int l=0,r=INT_MAX;
        bool flag =false;
        
        while(l<=r)
        {
            
            int m=l+(r-l)/2;
            double ans=1.0;
            
            for(int i=0;i<n;i++)
            {
                ans*=((a[i]*1.0)/m);
                
            }
            if(fabs(ans-1.0)< 1e-15)
            {
                flag =true;
                break;
            }
            else if(ans>1)
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}