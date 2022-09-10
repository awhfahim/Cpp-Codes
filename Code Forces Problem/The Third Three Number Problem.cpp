#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    if(n%2==0)
    {
        cout << (n/2) << " " << 0 << " " << 0 << "\n";
    }
    else
    {
        cout << "-1" << "\n";
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}

