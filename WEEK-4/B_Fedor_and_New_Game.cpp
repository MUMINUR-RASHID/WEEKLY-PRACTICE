#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,n,d;
    cin>>l>>n>>d;
    int ar[n+1];
    for(int i=0;i<=n;i++)
    {
        cin>>ar[i];
    }
    int an=0;
    for(int i=0;i<n;i++)
    {
        int cn=0;
        int ch=(ar[i]^ar[n]);
        for(int j=0;j<=l;j++)
        {
            int mask=(1<<j);
            if((ch&mask)!=0)
            {
                cn++;
            }
        }
        if(cn<=d) 
        {
            an++;
        }
    }
    cout<<an<<endl;
}