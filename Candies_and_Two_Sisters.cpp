// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    int n[t];
    for (i = 1; i <= t; i++)
    {
        cin >> n[i];
    }
    for (i = 1; i <= t; i++)
    {
        if (n[i] % 2 != 0)
        {
            cout << (n[i] - 1) / 2 << endl;
        }
        else if (n[i] % 2 == 0)
        {
            cout << (n[i] / 2) - 1 << endl;
        }
    }
}