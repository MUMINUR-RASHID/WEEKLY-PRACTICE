#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int ev=0;
        int mi=INT_MAX;
        int od=0;
        bool s=false;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0) 
            {
                ev++;
            }
            else 
            {
                od++;
            }
            if(a[i]==1) s=true;
            mi=min(mi,a[i]);

        }
        if(ev==n||od==n||(mi%2==1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}