#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, b = "hello";
    cin >> str;
    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == b[j])
        {
            j++;
        }
        if (j == 5)
        {
            break;
        }
    }
    if (j == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}