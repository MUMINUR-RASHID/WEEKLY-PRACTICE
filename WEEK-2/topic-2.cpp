#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    map<int, int> mp;
    int s = 0;
    int an = 0;
    int j = 0;
    for (int i = 0; i < N; i++)
    {
        s += A[i];
        if (s == K)
        {
            an = i+1;
        }

        else if (mp.find(s - K) != mp.end())
        {
            an = max(i - mp[s - K], an);
        }

        if (mp.find(s) == mp.end())
        {
            mp[s] = i;
        }
    }
    cout<<an<<endl;
    return 0;
}