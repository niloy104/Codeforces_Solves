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
        int i = 0;
        while (n <= 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
            }
            else
            {
                n = n * 2;
            }
            i++;
        }
        if (n == 1)
        {
            cout << i << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}