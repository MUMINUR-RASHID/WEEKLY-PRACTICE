#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        long long int s=0;
        while(n)
        {
            s+=n;
            n/=2;
        }
        cout<<s<<endl;
    }
}