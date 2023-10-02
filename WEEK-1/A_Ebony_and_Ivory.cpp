#include <bits/stdc++.h>

using namespace std;

int dp[10005];

bool cs(int a,int b,int c)
{
    if(c==0) return true;
    if(c<0) return false;
    if(dp[c]!=-1) return dp[c];
    bool c1=cs(a,b,c-a);
    bool c2=cs(a,b,c-b);
    return dp[c]=c1|c2;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    memset(dp, -1, sizeof dp);

    bool t=cs(a,b,c);
    if(t) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



    return 0;
}
