#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    map<int,bool>check;
    for(int i=0;i<=1440;i++)
    {
        check[i]=false;
    }
    check[0]=true;
    check[70]=true;
    check[140]=true;
    check[210]=true;
    check[280]=true;
    check[350]=true;
    check[601]=true;
    check[671]=true;
    check[741]=true;
    check[811]=true;
    check[881]=true;
    check[951]=true;
    check[1202]=true;
    check[1272]=true;
    check[1342]=true;
    check[1412]=true;
    

    while(n--)
    {
        string s;
        int t;
        cin>>s>>t;
        string p="";
        p=p+s[0]+s[1];
        int k=stoi(p)*60;
        string q="";
        q=q+s[3]+s[4];
        int m=k+stoi(q);
        int cnt=0;
        set<int>st;
        int i=2500;
       
        while(i--)
        {
            st.insert(m);
            m=(m+t)%1440;
            
        }
        for(auto ss:st)
        {
            if(check[ss]) cnt++;
        }
        cout<<cnt<<endl;

    }
    return 0;
}
