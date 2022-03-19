// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 0, c = 0;
    cin >> n;
    string s;
    cin >> s;
    while (s[i] != '\0')
    {
        if (s[i] == s[i + 1])
            c++;
        i++;
    }
    cout << c << endl;
}