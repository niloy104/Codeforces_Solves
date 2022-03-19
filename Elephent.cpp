//accepted
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin>>x;

    n = x / 5;
    if (x % 5 == 0)
    {
        cout<<n<<endl;
    }

    else
    {
        cout<<n+1<<endl;
    }

    return 0;
}