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
        int n;
        cin>>n;
        if(n<=15)
        {
            if(n<=10)
            {
                cout<<"Lower Double"<<endl;
            }
            else 
            {
                cout<<"Lower Single"<<endl;
            }
        }
        else
        {
            if(n<=25)
            {
                cout<<"Upper Double"<<endl;
            }
            else 
            {
                cout<<"Upper Single"<<endl;
            }
        }
    }
    return 0;
}