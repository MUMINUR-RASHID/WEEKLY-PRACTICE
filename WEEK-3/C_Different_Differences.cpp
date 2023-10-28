#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        float k,n;
        cin>>k>>n;
        int l=1,dif=1;
        for(int i=1;i<=k;i++)
        {
            cout<<l<<" ";
            if((n-(l+dif))>=(k-i-1))
            {
                l+=dif;
                dif++;
            }
            else
            {
                l++;
            }
            
        }
        
        cout<<endl;

    }
}