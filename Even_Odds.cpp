#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long arr[n] = {0};
    long long i, j = 1;
    if (n % 2 == 0)
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                arr[j] = i;
                j++;
            }
            else if (i % 2 == 0)
            {
                arr[n / 2 + j - 1] = i;
            }
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                arr[j] = i;
                j++;
            }
            else if (i % 2 == 0)
            {
                arr[n / 2 + j] = i;
            }
        }
    }
    cout << arr[k] << endl;

    return 0;
}