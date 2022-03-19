// Accepted!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a % b == 0)
        {
            printf("0\n");
        }
        else
            printf("%d\n", b - (a % b));
    }
    return 0;
}