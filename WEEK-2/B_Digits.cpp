#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    cin>>n>>b;
    string s="";
    while(n)
    {
        int r=n%b;
        s+=(r+'0');
        n=n/b;
    }
    cout<<s.size()<<endl;
    return 0;
}