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
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s; cin>>s;
        int i=0,j=0;
        int b=0;
        int an=0;
        while(j<n)
        {
            if(s[j]=='B')
            {
                b++;
            }
            if(j>=k-1)
            {
                an=max(an,b);
                if(s[i]=='B') b--;
                i++;
            }
            j++;
        }
        cout<<k-an<<endl;
    }
    return 0;
}