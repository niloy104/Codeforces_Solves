//Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int flag = false;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
            flag = true;
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}