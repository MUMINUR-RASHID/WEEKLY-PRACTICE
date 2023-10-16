#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        int d=s-r;
        for(int i=n-1;i>=1;i--)
        {
            if((s-i)>=d)
            {
                cout<<d<<" ";
                s-=d;
            }
            else if(s==i) 
            {
                cout<<1<<" ";
                s-=1;
            }
            else
            {
                cout<<s-i<<" ";
                s-=(s-i);
            }
            
        }
        cout<<s<<endl;
    }
}