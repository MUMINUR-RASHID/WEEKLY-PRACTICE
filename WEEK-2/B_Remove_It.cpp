#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int v:a)
    {
        if(v!=m) cout<<v<<" ";
    }
    cout<<endl;
    return 0;
}