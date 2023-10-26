#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,tr;
        cin>>n>>tr;
        vector<int>v;
        int s=-1;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            if((x&tr)==tr)
            {
                s=(s&x);
            }
        }
        

            if(s==tr) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
}