#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{

    ll n;
    cin >> n;
    ll cnt = 0;
    for(int i = 0; i <= n; i++)
    {
        if((n+i) == (n^i))
            cnt++;
    }

    cout << cnt << "\n";
    return 0;
}

