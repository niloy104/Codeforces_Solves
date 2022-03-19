//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int p, q;
        cin >> p >> q;
        if (p + 1 < q)
        {
            count++;
        }
    }
    cout << count;
}