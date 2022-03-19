//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else if (n < 0)
    {
        int ls = n / 10;
        int temp1 = n % 10;
        n = n / 10;
        int temp2 = n % 10;
        n = n - temp2 + temp1;
        if (ls > n)
            cout << ls << endl;
        else
            cout << n << endl;
    }

    return 0;
}