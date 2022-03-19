//Accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest;
    cin >> guest;
    string host;
    cin >> host;
    string pile;
    cin >> pile;

    string str = guest + host;
    sort(str.begin(), str.end());
    sort(pile.begin(), pile.end());

    if (str == pile)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}