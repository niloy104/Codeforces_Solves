//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[2] != a[1] && a[n] == a[2])
            {
                cout << 1 << endl;
                break;
            }

            else if (a[1] != a[i])
            {
                cout << i << endl;
            }
        }
    }
}