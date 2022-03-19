//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int w, x, y, z, p, q, maximum;
    w = a + b * c;
    x = a * (b + c);
    y = a * b * c;
    z = (a + b) * c;
    p = a + b + c;
    q = a * b + c;

    maximum = max(w, max(x, max(y, max(z, max(p, q)))));
    cout << maximum << endl;
    return 0;
}