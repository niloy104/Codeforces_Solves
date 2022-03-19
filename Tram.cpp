// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mx = 0, p = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;

        p = (p + b) - a;
        if (p > mx)
        {
            mx = p;
        }
    }
    cout << mx << endl;
    return 0;
}