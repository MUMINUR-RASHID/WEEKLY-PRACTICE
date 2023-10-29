#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int l,h,d;
        cin>>l>>h>>d;
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else if(abs(a-b)>=d) cout<<1<<endl;
        else if((h-max(a,b))>=d||(min(a,b)-l)>=d) cout<<2<<endl;
        else if((h-min(a,b))>=d&&(max(a,b)-l)>=d)  cout<<3<<endl;
        else cout<<-1<<endl;
    }
}