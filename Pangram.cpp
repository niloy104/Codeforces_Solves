//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    sort(str.begin(), str.end());

    auto res = unique(str.begin(), str.end());

    string ch = string(str.begin(), res);

    if (ch == "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}