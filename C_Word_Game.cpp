#include<bits/stdc++.h>
using namespace std;





int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<string,int>mp1;
        map<string,int>mp2;
        map<string,int>mp3;
        int p1=0,p2=0,p3=0;
        for(int i=0;i<n;i++)
        {
            string s; cin>>s;
            mp1[s]=1;
            p1+=3;
        }
        for(int i=0;i<n;i++)
        {
            string s; cin>>s;
            if(mp1[s])
            {
                p1-=2;
                mp2[s]=1;
                p2+=1;
            }
            else 
            {
                mp2[s]=1;
                p2+=3;
            }
        }
        for(int i=0;i<n;i++)
        {
            string s; cin>>s;
            if(mp1[s]&&mp2[s])
            {
                p1-=1;
                p2-=1;
                mp3[s]=1;
            }
            else if(mp1[s])
            {
                p1-=2;
                mp3[s]=1;
                p3+=1;
            }
            else if(mp2[s])
            {
                p2-=2;
                mp3[s]=1;
                p3+=1;
            }
            else
            {
                mp3[s]=3;
                p3+=3;
            }
        }
        cout<<p1<<" "<<p2<<" "<<p3<<endl;

    }
    return 0;
}
