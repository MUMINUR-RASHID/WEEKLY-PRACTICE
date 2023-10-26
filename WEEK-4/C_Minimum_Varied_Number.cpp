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
                an=char(i+'0')+an;
                n-=i;
            }
            i--;
        }
        
        cout<<an<<endl;
    }
}