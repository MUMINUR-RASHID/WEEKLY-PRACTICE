#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
       long long int n;cin>>n;
        if(n%2==1) cout<<"YES"<<endl;
        else
        {
            float a=log2(n);
            int b=log2(n);
            if(a==b) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}