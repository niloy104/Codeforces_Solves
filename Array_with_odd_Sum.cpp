#include <stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while (t--)
    {
        int n, sum = 0;
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            int a;
            scanf("%d", &a);
            sum = sum + a;
        }
        if (sum % 2 != 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
