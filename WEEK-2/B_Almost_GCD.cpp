#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int an=0,cn;
    int k;
    for(int i=2;i<=1000;i++)
    {
        cn=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                cn++;
            }
        }
        if(cn>=an)
        {
            an=cn;
            k=i;
        }
    }
    cout<<k<<endl;

}