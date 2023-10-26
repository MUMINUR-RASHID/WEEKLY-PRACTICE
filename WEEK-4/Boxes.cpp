#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        long long ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n,greater<long long>());
        long long tp=ar[0];
        int cn=0;
        while(tp>0){
	        tp/=2;
	        cn++;
	    }
        int an=0;
	    long long g=pow(2, cn-1);
	    for(int i=0; i<n; i++){
	        if(ar[i]>=g) an++;
	    }
	    if(an%2==1) cout<<(an/2)+1<<endl;
	    else cout<<an/2<<endl;
    }
}