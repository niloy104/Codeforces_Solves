//Acceptd....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char pixel[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> pixel[i][j];
        }
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (pixel[i][j] == 'C' || pixel[i][j] == 'M' || pixel[i][j] == 'Y')
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "#Black&White" << endl;
    }
    else
    {
        cout << "#Color" << endl;
    }
}