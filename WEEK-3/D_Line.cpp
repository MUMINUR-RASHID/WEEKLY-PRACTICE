#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        string s;
        cin>>s;
        long long int m=n/2;
        long long int an=0;
        vector<long long int>vp;
        for(long long int i=0;i<n;i++)
        {
            if(s[i]=='L') 
            {
                vp.push_back((n-1-i)-i);
                an+=i;
            }
            else
            {
                vp.push_back(i-(n-i-1));
                an+=n-1-i;
            } 

        }
        sort(vp.begin(),vp.end(),greater<long long int>());
        for(long long int i=0;i<n;i++)
        {
            if(vp[i]>0) an+=vp[i];
            cout<<an<<" ";
        }
        cout<<endl;
    }
}