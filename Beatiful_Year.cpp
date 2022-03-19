// Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, a, b, c, d;
    cin >> y;
    while (1)
    {
        y++;
        a = y % 10;
        b = (y / 10) % 10;
        c = (y / 100) % 10;
        d = (y / 1000);

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}