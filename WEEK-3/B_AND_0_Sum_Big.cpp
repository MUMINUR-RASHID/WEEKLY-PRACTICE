#include<bits/stdc++.h>
using namespace std;
const long long int mod=1e9+7;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int an=1;
        while(k--)
        {
            an=((an%mod)*(n%mod))%mod;
        }
        cout<<an<<endl;
    }
}