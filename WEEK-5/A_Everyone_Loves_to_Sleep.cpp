#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,h1,m1;
        cin>>a>>h1>>m1;
        int ab=(h1*60)+m1;
        int ar[a];
        int i=0;
        int k=a;
        while(k--)
        {
            int h2,m2;
            cin>>h2>>m2;
            int an=(h2*60)+m2;
            if(an<ab) an+=1440;
           ar[i]=an;
           i++;
        }
        sort(ar,ar+a);
        cout<<(ar[0]-ab)/60<<" "<<(ar[0]-ab)%60<<endl;

    }
}