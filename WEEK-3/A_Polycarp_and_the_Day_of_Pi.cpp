#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string pi="314159265358979323846264338327";
    int t;cin>>t;
    while(t--)
    {
        string p; cin>>p;
        int cn=0;
        for(int i=0;i<p.size();i++)
        {
            if(p[i]==pi[i]) cn++;
            else break;
        }
        cout<<cn<<endl;
    }
}