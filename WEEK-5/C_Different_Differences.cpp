#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int l=1,d=1;
        for(int i=1;i<=k;i++)
        {
            cout<<l<<" ";
            if((n-l-d)>=(k-i-1))
            {
                l+=d;
                d++;

            }
            else
            {
                l++;
            }
        }
        cout<<endl;
    }
}