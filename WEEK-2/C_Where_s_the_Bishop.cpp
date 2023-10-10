#include<bits/stdc++.h>
using namespace std;
vector<string>v;

bool check(int x,int y)
{
    return (v[x-1][y-1]=='#'&&v[x-1][y+1]=='#'&&v[x+1][y-1]=='#'&&v[x+1][y+1]=='#');
}


int main()
{
    int t;cin>>t;
    while(t--)
    {
        v.clear();
        for(int i=0;i<8;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        bool an=false;
        for(int i=1;i<7;i++)
        {
            for(int j=1;j<7;j++)
            {
                if(v[i][j]=='#')
                {
                   an=check(i,j);
                   if(an)
                   {
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                   }
                }
            }
             if(an) break;
        }

    }
    return 0;
}
