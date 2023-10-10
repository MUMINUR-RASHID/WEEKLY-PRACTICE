#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<long long int> v1,v2;
    long long int s=0;
    v1.push_back(0);
    v2.push_back(0);
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        s+=x;
        v1.push_back(s);
        v2.push_back(x);
    }
    sort(v2.begin(),v2.end());
    long long int s2=0;
    for(int i=0;i<=n;i++)
    {
        s2+=v2[i];
        v2[i]=s2;
    }
    int q; cin>>q;
    while(q--)
    {
        int t,p1,p2;
        cin>>t>>p1>>p2;
        if(t==1)
        {
           long long int an=v1[p2]-v1[p1-1];
            cout<<an<<endl;
        }
        else
        {
            long long int an=v2[p2]-v2[p1-1];
            cout<<an<<endl;
        }
    }
    return 0;
}