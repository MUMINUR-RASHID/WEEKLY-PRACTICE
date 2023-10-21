#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long int s=0;
        long long int od=0;
        long long int ev=0;

        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            s+=x;
            if(x%2==0) ev++;
            else od++;
        }
        while(q--)
        {
            int tj,xj;
            cin>>tj>>xj;
            if(tj==0)
            {
                s+=(ev*xj);
                if(xj%2==1)
                {
                    od+=ev;
                    ev=0;
                }
            }
            else
            {
                s+=(od*xj);
                if(xj%2==1)
                {
                    ev+=od;
                    od=0;
                }
            }
            cout<<s<<endl;
        }

    }
}