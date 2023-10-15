#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    string k="Timur";
    sort(k.begin(),k.end());
    while(t--)
    {
        int n;cin>>n;
        string s; cin>>s;
        sort(s.begin(),s.end());
        if(k==s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}