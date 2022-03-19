// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;
        int total = h * 60 + m;
        cout << 1440 - total << endl;
    }
    return 0;
}