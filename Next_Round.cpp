// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, arr[100];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= arr[k] && arr[i] > 0)
        {
            count++;
        }
    }
    cout << count;
}