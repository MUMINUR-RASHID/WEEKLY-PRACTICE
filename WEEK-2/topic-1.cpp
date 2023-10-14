#include<bits/stdc++.h>
using namespacem std;
int main()
{
    
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=a.size();
    int j=0,i=0;
    long long int s=0;
    int an=0;
    while(j<l)
    {
        s+=a[j];
        if(s>=k)
        {
            
         while(s>k)
         {
               s-=a[i];
            i++;
         }
         if(s==k) 
         {
             an=max(an,(j-i+1));
         }
            
        }
        j++;

    }
    cout<<an<<endl;
    return 0;
}
