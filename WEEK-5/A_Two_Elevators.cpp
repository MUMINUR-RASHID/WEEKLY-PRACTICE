#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int da=abs(1-a);
        int db=abs(b-c)+abs(1-c);
        if(da>db) cout<<2<<endl;
        else if(db>da) cout<<1<<endl;
        else cout<<3<<endl;
    }
}