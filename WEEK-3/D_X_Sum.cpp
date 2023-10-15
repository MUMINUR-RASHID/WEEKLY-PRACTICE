#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int s=0;
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int l=0;
                int ci=i;
                int cj=j;
                while( ci < n && cj < m)
                {
                     l+=a[ci][cj];
                    ci++;
                    cj++;
                   
                }
                ci=i;
                cj=j;
                while(ci >= 0 &&  cj < m)
                {
                    l+=a[ci][cj];
                    ci--;
                    cj++;
                    
                }
                ci=i;
                cj=j;
                while(ci >= 0 &&  cj >= 0 )
                {
                    l+=a[ci][cj];
                    ci--;
                    cj--;
                    
                }
                ci=i;
                cj=j;
                while( ci < n && cj >= 0)
                {
                   l+=a[ci][cj];
                    ci++;
                    cj--;
                    
                }
                l-=3*a[i][j];
                s=max(s,l);

            }
        }
        cout<<s<<endl;
    }
}