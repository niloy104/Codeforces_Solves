//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int temp = (x1 < x2) ? x1 : x2;
    int min = (x3 < temp) ? x3 : temp;
    temp = x1 > x2 ? x1 : x2;
    int max = temp > x3 ? temp : x3;
    int a, b;
    if (max == x1 && min == x2 || max == x2 && min == x1)
    {
        a = max - x3;
        b = x3 - min;
    }
    else if (max == x1 && min == x3 || max == x3 && min == x1)
    {
        a = max - x2;
        b = x2 - min;
    }
    else if (max == x2 && min == x3 || max == x3 && min == x2)
    {
        a = max - x1;
        b = x1 - min;
    }
    cout << a + b << endl;

    return 0;
}