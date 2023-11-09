#include<bits/stdc++.h>
using namespace std;


typedef  long long ll;
typedef  long int lli;
typedef  double dl;
typedef long double ld;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  pair<int,int> pii;
typedef  pair<ll,ll> pll;
typedef  vector<pii>vpi;
typedef  vector<pll> vpl;
 
#define     pb       push_back
#define     del       pop_back
#define     MP        make_pair
#define     F         first
#define     S         second
#define     sz(x)     (int)x.size()
#define     all(a)    (a).begin(),(a).end()
#define     faster    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define     endl      '\n'
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"

const char nl='\n';


int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,c,l;
        cin>>n>>c>>l;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            mp[y].push_back(x);
        }
        if(mp.find(l)==mp.end()||mp[l].size()<c) cout<<-1<<endl;
        else
        {
            sort(mp[l].begin(),mp[l].end(),greater<int>());
            int sum=0;
            for(int i=0;i<c;i++)
            {
                sum+=mp[l][i];
            }
            cout<<sum<<endl;
        }
        

    }
    return 0;
}
