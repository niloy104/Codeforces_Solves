// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int temp = x;
        int len = 0;
        while (temp != 0)
        {
            len++;
            temp = temp / 10;
        }
        int digit = x % 10;
        if (len == 1)
        {
            cout << ((digit * 10) + 1) - 10 << endl;
        }
        else if (len == 2)
        {
            cout << ((digit * 10) + 3) - 10 << endl;
        }
        else if (len == 3)
        {
            cout << ((digit * 10) + 6) - 10 << endl;
        }
        else if (len == 4)
        {
            cout << ((digit * 10) + 10) - 10 << endl;
        }
    }
}