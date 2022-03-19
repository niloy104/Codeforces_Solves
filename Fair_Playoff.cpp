//Acceptd
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int win1 = max(a, b);
        int lost1 = min(a, b);
        int win2 = max(c, d);
        int lost2 = min(c, d);
        if (win1 >= lost2 && win2 >= lost1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}