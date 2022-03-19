// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3, x4, a, b, c, x, num[5], i;
    cin >> x1 >> x2 >> x3 >> x4;
    num[0] = x1, num[1] = x2, num[2] = x3, num[3] = x4;

    x = num[0];
    for (i = 0; i < 4; i++)
    {
        if (x < num[i])

            x = num[i];
    }
    if (x == x1)
    {
        a = x1 - x2;
        b = x1 - x3;
        c = x1 - x4;
    }
    else if (x == x2)
    {
        a = x2 - x1;
        b = x2 - x3;
        c = x2 - x4;
    }
    else if (x == x3)
    {
        a = x3 - x1;
        b = x3 - x2;
        c = x3 - x4;
    }
    else if (x == x4)
    {
        a = x4 - x1;
        b = x4 - x2;
        c = x4 - x3;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}