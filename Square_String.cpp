//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int d = str.length();
        int x = d / 2;
        string ch1, ch2;
        ch1 = str.substr(0, x);
        ch2 = str.substr(x, d);
        if (d % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (ch1 == ch2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}