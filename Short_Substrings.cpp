//Accepted.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        int i = 0;
        for (int i = 1; i < b.length() - 1; i++)
        {
            b.erase(i, 1);
        }
        cout << b << endl;
    }
}