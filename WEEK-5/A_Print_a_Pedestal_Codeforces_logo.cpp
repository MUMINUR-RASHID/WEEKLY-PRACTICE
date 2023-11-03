#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[]={3,2,1};
         if(n>6) 
         {
            int k=n%3;
            int m=(n-6)/3;
            if(k==0) 
            {
                ar[0]+=m;
                ar[1]+=m;
                ar[2]+=m;
            }
            else if(k==2)
            { 
                ar[0]+=m+1;
                ar[1]+=m+1;
                ar[2]+=m;
            }
            else
            {
                ar[0]+=m+1;
                ar[1]+=m;
                ar[2]+=m;
            }
         }
        cout<<ar[1]<<" "<<ar[0]<<" "<<ar[2]<<endl;
    }
}