#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int mi=INT_MAX;
        int ma=INT_MIN;
        int a[4];
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
            mi=min(a[i],mi);
            ma=max(a[i],ma);
        }
        if((a[0]==mi&&a[3]==ma)||(a[3]==mi&&a[0]==ma)||(a[1]==mi&&a[2]==ma)||(a[2]==mi&&a[1]==ma)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}