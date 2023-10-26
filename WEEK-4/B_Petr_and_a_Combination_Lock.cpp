#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    bool b=false;
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            int mask=(1<<j);
            if((i&mask)==0)
            {
                sum-=ar[j];
            }
            else 
            {
                sum+=ar[j];
            }
        }
        if(sum%360==0)
        {
            b=true;
            break;
        }
    }
    if(b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}