// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, i = 1, tp = 0;
    cin >> k >> n >> w;
    while (w--)
    {
        tp = tp + k * i;
        i++;
    }

    if (n > tp)
        cout << 0;
    else
        cout << abs(tp - n);
    return 0;
}