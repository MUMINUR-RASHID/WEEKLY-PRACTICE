#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        float k,n;
        cin>>k>>n;
        int l=1,i;
        for(i=1;i<k;i++)
        {
            if(l>=n) 
            {
                l=l-i+2;
                break;
            }
            cout<<l<<" ";
            l+=i;
        }
        for(int j=i;j<=k;j++)
        cout<<l++<<" ";
        cout<<endl;

    }
}