//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    cout << endl;
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum = sum + a[j];
    }
    int s = 0;
    int j = 0;

    while (s <= sum)
    {
        s = s + a[j];
        sum = sum - a[j];
        j++;
    }
    cout << j << endl;

    return 0;
}