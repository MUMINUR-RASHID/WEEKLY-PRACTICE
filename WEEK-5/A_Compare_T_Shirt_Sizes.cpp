#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int an1=1;
        int an2=1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='X') an1+=10;
            else if(s1[i]=='M') an1+=500;
            else if(s1[i]=='S') an1*=-1;
            else an1+=1000;
        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]=='X') an2+=10;
            else if(s2[i]=='M') an2+=500;
            else if(s2[i]=='S') an2*=-1;
            else an2+=1000;

        }
        if(an1<an2) cout<<"<"<<endl;
        else if(an1>an2) cout<<">"<<endl;
        else cout<<"="<<endl;
    }
}