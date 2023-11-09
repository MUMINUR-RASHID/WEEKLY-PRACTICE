/*        
                           بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ     

              ____    ____ __     __ ____    ____ _____ ____  _____ 
             |_   \  /   _|  |   |  |_   \  /   _|_   _|_   \|_   _|
               |   \/   | |  |   |  | |   \/   |   | |   |   \ | |
               | |\  /| | |  |   |  | | |\  /| |   | |   | |\ \| | 
              _| |_\/_| |_ \  \_/  / _| |_\/_| |_ _| |_ _| |_\   |_ 
             |_____||_____| \_____/ |_____||_____|_____|_____|\____|


*/
#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int cn=0;
        bool flag=true;
        for(int i=n-2;i>=0;i--)
        {
            while(ar[i] >= ar[i + 1] && ar[i] > 0)
            {
                ar[i]/=2;
                cn++;
            }
            if(ar[i]==ar[i+1])
            {
                flag=false;
                break;
            }
        }
        if(flag) cout<<cn<<endl;
        else cout<<-1<<endl;

    }
    return 0;
}