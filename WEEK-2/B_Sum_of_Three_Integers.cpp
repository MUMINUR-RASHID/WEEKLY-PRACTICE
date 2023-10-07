#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,k;
    cin>>k>>s;
    int c=0;
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            int n=s-i-j;
            if(n>=0&&n<=k) c++;
        
        }
    }
    cout<<c<<endl;
}