#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            for(int j=0;j<x;j++)
            {
                char c; cin>>c;
                if(c=='D') a[i]++;
                else a[i]--;
            }
        }
        for(int v:a)
        {
            
            if(v<0) cout<<10+v<<" ";
            else if(v>9) cout<<v-10<<" ";
            else cout<<v<<" ";
        }
        cout<<endl;
    }
}