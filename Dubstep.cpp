//Accepted
#include <bits/stdc++.h>
using namespace std;
void replace(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    if (str[0] == 'W' && str[1] == 'U' && str[2] == 'B')
    {
        cout << " ";
        replace(str.erase(0, 3));
    }
    else
    {
        cout << str[0];
        replace(str.substr(1));
    }
}
int main()
{
    string str;
    getline(cin, str);
    replace(str);
    return 0;
}