#include<bits/stdc++.h>
using namespace std;
long long int gcd(int a,int b)
{
    if(b%a==0) return a;
    else gcd(b%a,a);
}
int main()
{
    long long int l; cin>>l;
    long long int s=0;
    for(long long int i=1;i<=l;i++)
    {
        for(long long int j=1;j<=l;j++)
        {
            for(long long int k=1;k<=l;k++)
            {
                long long int p=gcd(i,j);
               long long  int q=gcd(p,k);
                s+=q;
            }
        }

    }
    cout<<s<<endl;
}
