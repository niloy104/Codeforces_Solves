// Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    char s[101], t[101];
    cin >> s >> t;
    d = strcmp(s, strrev(t));
    if (d == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}