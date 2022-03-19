//Accepted
#include <bits/stdc++.h>
using namespace std;
void replace(string str)
{
    if (str.length() == 0)
    {
        return;
    }
    if (str[0] == 'A' || str[0] == 'O' || str[0] == 'Y' || str[0] == 'E' || str[0] == 'U' || str[0] == 'I' || str[0] == 'a' || str[0] == 'o' || str[0] == 'y' || str[0] == 'e' || str[0] == 'u' || str[0] == 'i')
    {
        replace(str.erase(0, 1));
    }
    else
    {
        cout << ".";
        char ch= tolower(str[0]);
        cout<<ch;
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