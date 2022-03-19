//Acceptd....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    bool flag = true;

    for (int i = 1; i < str.length(); i++)
    {
        if (isupper(str[0]) && isupper(str[i]))
        {
            flag = true;
        }
        else if (islower(str[0]) && isupper(str[i]))
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (isupper(str[i]))
            {
                str[i] = tolower(str[i]);
            }
            else
            {
                str[i] = toupper(str[i]);
            }
        }
        cout << str;
    }
    else
    {
        cout << str;
    }
    return 0;
}