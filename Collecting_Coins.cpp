#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int sum1 = a + b + c + n;
        int mx = max(a, max(b, c));
        for (int i = 1; i <= n; i++)
        {
            if (a != mx)
            {
                a++;
            }
            if (b != mx)
            {
                b++;
            }
            if (c != mx)
            {
                c++;
            }
        }
        int sum2 = a + b + c;
        if (sum1 <= sum2)
        {
            int sub = abs(sum1 - sum2);
            if (sub % 3 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}