#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector <ll> vc(n);
    for(ll& x : vc) cin >> x;
    ll ans = 0;
    if(k == 1)
    {
        ans = (n-1)/2;
    }
    else
    {
        for(int i = 1; i < n-1; i++)
        {
            ll res = vc[i-1] + vc[i+1];
            if(vc[i] > res)
            {
                ++ans;
            }
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
