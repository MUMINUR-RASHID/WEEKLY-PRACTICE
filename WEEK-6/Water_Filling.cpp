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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2) cout<<"Not now"<<endl;
        else cout<<"Water filling time"<<endl;
    }
    return 0;
}