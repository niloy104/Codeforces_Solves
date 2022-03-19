//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for (int i = 2; i < str.length(); i = i + 2)
    {
        for (int j = 0; j < str.length() - i; j = j + 2)
        {
            if (str[j] > str[j + 2])
            {
                swap(str[j], str[j + 2]);
            }
        }
    }
    for (int j = 0; j < str.length(); j++)
    {
        cout << str[j];
    }
}