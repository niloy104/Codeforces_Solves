#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b, d;
    cin >> n >> m >> a >> b;
    double x = double(b) / m;
    if (x < a)
    {
        int cost = 0;
        int i = 1;
        while (m < n)
        {
            d = m + i;
            i++;
        }
        cout << d;
    }

    return 0;
}