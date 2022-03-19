//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        int d = str.length();
        if (d > 10)
        {
            cout << str[0] << d - 2 << str[d - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}