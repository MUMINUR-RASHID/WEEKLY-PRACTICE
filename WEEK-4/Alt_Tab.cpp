#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n; cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s; cin>>s;
        v.push_back(s);
    }
    map<string,bool>ms;
    string S="";
    for(int i=v.size()-1;i>=0;i--)
    {
        string x=v[i];
        if(ms.find(x)==ms.end())
        {
            int k=x.size();
            char a=x[k-1];
            char b=x[k-2];
            S+=b;
            S+=a;
            ms[x]=true;
        }
    }
    cout<<S<<endl;
}
