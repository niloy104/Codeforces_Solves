//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int count = 0;
    int temp = n;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        else
        {
            break;
        }
        n /= 10;
    }
    if (temp % 47 == 0 || temp % 744 == 0)
    {
        cout << "YES" << endl;
    }
    else if (n == 0 || temp % 4 == 0 || temp % 7 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}