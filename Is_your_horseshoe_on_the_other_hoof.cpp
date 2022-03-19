#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 0;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        int x = -(n + 1) / 2;
        cout << x << endl;
    }
    return 0;
}