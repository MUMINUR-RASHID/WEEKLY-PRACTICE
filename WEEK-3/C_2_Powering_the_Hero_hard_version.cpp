#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        priority_queue<int> pq;
        long long int s=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==0&&!pq.empty())
            {
                s+=pq.top();
                pq.pop();
            }
            pq.push(x);
        }
        cout<<s<<endl;
    }
}