//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int ans = 2, i = 1;
        while (ans < n)
        {
            ans = ans + x;
            i++;
        }
        cout << i << endl;
    }
    return 0;
}