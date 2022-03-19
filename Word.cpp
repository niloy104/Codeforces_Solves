// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, c = 0, s = 0;
    char str[100];
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            c++;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            s++;
        }
        i++;
    }
    if (c > s)
        printf("%s", strupr(str));
    else if (s > c)
        printf("%s", strlwr(str));
    else
        printf("%s", strlwr(str));
}