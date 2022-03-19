#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int mn = min(a, min(b, c));
    if (n % 2 == 0 || n == 1)
    {
        if (n % a == 0)
        {
            cout << n / a;
        }
        else if (n % b == 0)
        {
            cout << n / b;
        }
        else if (n % c == 0)
        {
            cout << n / c;
        }
    }
    else
    {
        cout << 2;
    }
}