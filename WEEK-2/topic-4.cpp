#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int j = 0;
    int i = 0;
    int frs[26] = {0};
    int an = 0;

    while (j < S.size())
    {
        if (frs[S[j] - 'a'] == 0)
        {
            frs[S[j] - 'a']++;
            an = max(an, j - i + 1);
        }
        else
        {
            frs[S[j] - 'a']++;
            while (frs[S[j] - 'a']!= 1)
            {
                frs[S[i] - 'a']--;
                i++;
            }
        }
        j++;
    }
    cout << an << endl;
    return 0;
}