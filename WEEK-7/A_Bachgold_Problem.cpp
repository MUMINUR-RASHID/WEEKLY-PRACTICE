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
    int n;
    cin>>n;
    if(n%2)
    {
        cout<<n/2<<endl;
        for(int i=0;i<(n/2)-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    else
    {
        cout<<n/2<<endl;
        for(int i=0;i<(n/2);i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    return 0;
}