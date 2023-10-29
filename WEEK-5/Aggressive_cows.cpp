#include<bits/stdc++.h>
using namespace std;
bool is_valid(vector<int>ar,int an,int co)
{
    int cn=1;
    int last=0;
    for(int i=1;i<ar.size();i++)
    {
        if(abs(ar[i]-ar[last])>=an)
        {
            cn++;
            last=i;
        }
    }
    return cn>=co;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int>ar;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ar.push_back(x);
        }
        sort(ar.begin(),ar.end());
        int l=0,r=INT_MAX;
        int an;
        while(l<=r)
        {
            int m=l+((r-l)/2);
            if(is_valid(ar,m,c))
            {
                an=m;
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        cout<<an<<endl;
    }
}