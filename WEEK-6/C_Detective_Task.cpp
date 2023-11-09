/*
                           بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ

              ____    ____ __     __ ____    ____ _____ ____  _____
             |_   \  /   _|  |   |  |_   \  /   _|_   _|_   \|_   _|
               |   \/   | |  |   |  | |   \/   |   | |   |   \ | |
               | |\  /| | |  |   |  | | |\  /| |   | |   | |\ \| |
              _| |_\/_| |_ \  \_/  / _| |_\/_| |_ _| |_ _| |_\   |_
             |_____||_____| \_____/ |_____||_____|_____|_____|\____|


*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;
    int on = 0;
    int zr = s.size()-1;
    int q=0;
    
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='0')
      {
        zr=i;
        break;
      }
      else if(s[i]=='1')
      {
        on=i;
      }
      else 
      {
        q++;
      }
    }
    if(s.size()==1) cout<<1<<endl;
    else if(q==s.size()) cout<<q<<endl;
    else cout<<zr-on+1<<endl;
  }
  return 0;
}