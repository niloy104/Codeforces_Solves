//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c > 1)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}