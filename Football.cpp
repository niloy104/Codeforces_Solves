#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;
    while (n--)
    {
        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A')
                a++;
            else if (str[i] = 'B')
                b++;
            else if (str[i] = 'C')
                c++;
            else if (str[i] = 'D')
                d++;
            else if (str[i] = 'E')
                e++;
            else if (str[i] = 'F')
                f++;
            else if (str[i] = 'G')
                g++;
            else if (str[i] = 'H')
                h++;
            else if (str[i] = 'I')
                i++;
            else if (str[i] = 'J')
                j++;
        }
    }
    int arr[] = {a, b, c, d, e, f, g, h, i, j};
    int mx = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (mx < arr[i])
            mx = arr[i];
    }
}