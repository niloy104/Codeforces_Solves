//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans, result;
    if (a > b)
    {
        ans = a - b;
        result = ans / 2;
        cout << b << " " << result << endl;
    }
    else if (a < b)
    {
        ans = b - a;
        result = ans / 2;
        cout << a << " " << result << endl;
    }
    else if (a == b)
    {
        result = 0;
        cout << a << " " << result << endl;
    }

    return 0;
}