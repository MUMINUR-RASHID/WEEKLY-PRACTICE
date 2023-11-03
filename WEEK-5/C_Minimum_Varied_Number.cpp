#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int i=9;
        string an="";
        while(n)
        {
            if((n-i)>=0)
            {
                an+=(i+'0');
                n-=i;
            }
            i--;
        }
        reverse(an.begin(),an.end());
        cout<<an<<endl;
    }
}