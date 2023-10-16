#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int cn=0;
        while(n>1)
        {
            n>>=1;
            cn++;
        }
        long long int an=n<<cn;
        cout<<an-1<<endl;
    }
}