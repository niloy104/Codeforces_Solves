//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int i = 1;
    int ans = n, s = 0;
    while (n > s)
    {
        s = m * i;
        ans = n++;
        i++;
    }
    cout << ans << endl;
}