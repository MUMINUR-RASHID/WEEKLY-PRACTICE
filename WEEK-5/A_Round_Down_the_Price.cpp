#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        long long int m=log10(n);
        double a=pow(10,m);
        cout<<fixed<<setprecision(0)<<n-a<<endl;
    }
}