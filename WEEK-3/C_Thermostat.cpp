#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int l,r,d;
        cin>>l>>r>>d;
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else if(abs(a-b)>=d) cout<<1<<endl;
        else if((((r-l)-max((a-l),(b-l)))>=d)||(((r-l)-max((r-a),(r-b)))>=d)) cout<<2<<endl;
        else if(((r-a)>=d&&(b-l)>=d)||((r-b)>=d&&(a-l)>=d)) cout<<3<<endl;
        else cout<<-1<<endl;
    }
}