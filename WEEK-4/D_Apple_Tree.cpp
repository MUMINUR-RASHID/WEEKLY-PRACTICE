#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+7;
vector<int>g[N];
bool vi[N];
long long int count_leaf[N];
void dfs(int s)
{
    int parent=s;
    vi[parent]=true;
    for(auto v:g[parent])
    {
        if(!vi[v])
        {
            dfs(v);
            count_leaf[parent]+=count_leaf[v];
        }
        else if(g[parent].size()==1)
        {
            count_leaf[parent]=1;
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=0;i<n-1;i++)
        {
            int x,y; cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(1);
        int q;
        cin>>q;
        while(q--)
        {
            int s1,s2;
            cin>>s1>>s2;
            cout<<(count_leaf[s1]*count_leaf[s2])<<endl;
        }
        for(int i=0;i<=n;i++)
        {
            g[i].clear();
            vi[i]=false;
            count_leaf[i]=0;
        }
    }
}
