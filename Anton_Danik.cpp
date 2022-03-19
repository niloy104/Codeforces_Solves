//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i = 0, d = 0, a = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'D')
        {
            d++;
        }
        else if (str[i] == 'A')
        {
            a++;
        }
        i++;
    }
    if (d > a)
    {
        cout << "Danik";
    }
    else if (a > d)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}