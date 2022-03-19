// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = a;
    while (a >= b)
    {
        int x = a / b;
        sum = sum + x;
        int m = a % b;
        a = x + m;
    }
    cout << sum << endl;
}