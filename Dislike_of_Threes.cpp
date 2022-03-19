#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int ls = num % 10;
        if (ls != 3 || num % 3 != 0)
        {
            cout << num << endl;
        }
    }
}