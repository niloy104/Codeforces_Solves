#include <iostream>
using namespace std;
int main()
{
    long long int n, x;
    cin >> n;
    if (n % 2 == 0)
    {
        x=n/2;
    }
    else
    {
        x = -(n + 1) / 2;
    }
    cout << x << endl;
    return 0;
}