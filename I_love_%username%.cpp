//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1001] = {};
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    int max = arr[0];
    int min = arr[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            count++;
        }
        if (min > arr[i])
        {
            min = arr[i];
            count++;
        }
    }
    cout << count << endl;
}