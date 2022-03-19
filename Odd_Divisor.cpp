#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n;
        cin >> n;
        int x = n % 2;
        for (int i = 3; i < n / 2; i = i + 2)
        {
            if (n % i == 0 && n % 2 == 0 & n % 2 == 0)
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}