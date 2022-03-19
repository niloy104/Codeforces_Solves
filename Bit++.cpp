//Acceptd.....
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char inp[10];
    int n, ans = 0;
    cin >> n;
    while (n--)
    {
        cin >> inp;
        if (inp[1] == '+')
            ans++;
        else
            ans--;
    }
    cout << ans;
    return 0;
}