//Accepted.......
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    int check;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] < str2[i])
        {
            check = -1;
            break;
        }
        else if (str1[i] > str2[i])
        {
            check = 1;
            break;
        }
    }
    if (check == 1)
        cout << 1;
    else if (check == -1)
        cout << -1;
    else
        cout << 0;
}