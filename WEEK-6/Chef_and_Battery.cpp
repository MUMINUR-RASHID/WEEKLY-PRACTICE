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
        if(n>=50) 
        {
            if((n-50)%3==0) cout<<(n-50)/3<<endl;
            else cout<<((n-50)/3)+(2*((n-50)%3))<<endl;
        }
        else
        {
            if((50-n)%2==0) cout<<(50-n)/2<<endl;
            else cout<<((50-n)/2)+3<<endl;
        }
    }
    return 0;
}