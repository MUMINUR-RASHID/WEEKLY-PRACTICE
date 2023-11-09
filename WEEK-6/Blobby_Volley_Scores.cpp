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
        int n; cin>>n;
        string s; cin>>s;
        char last='A';
        int cn1=0;
        int cn2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A'&&last=='A') cn1++;
            else if(s[i]=='B'&&last=='B') cn2++;
            last=s[i];
        }
        cout<<cn1<<" "<<cn2<<endl;
    }
    
    return 0;
}