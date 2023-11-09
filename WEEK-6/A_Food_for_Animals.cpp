#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int d1=x-a;
        int d2=y-b;
        int an=0;
        if(d1>0) an=an+d1;
        if(d2>0) an=an+d2;
        if(an<=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}