//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxnum = a[0];
    int result = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        maxnum = max(maxnum, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        result = (maxnum - a[i]);
        ans = ans + result;
    }

    cout << ans << endl;
    return 0;
}