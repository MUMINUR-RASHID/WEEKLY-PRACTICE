#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v1(n);
        vector<int>v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        int ma=-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v1[i]=v1[i]-x;
            v2[i]=x;
            ma=max(ma,v1[i]);
        }
        bool flag=true;
        for(int i=0;i<n;i++)
        {
           if(v1[i]>ma||(v1[i]<ma&&v2[i]!=0)||ma==-1)
           {
            flag=false;
            break;
           }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}