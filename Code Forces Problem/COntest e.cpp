#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    double num = (n+1)/2;

    ll res = floor(num);
    ll res1 = n - res;

    ll neg = 1 << res;
    ll pos = res1 * (res1+1);
    //cout << neg << " " << pos;
    if(neg > pos)
    {
        cout << -1 * (neg - pos) << "\n";
    }
    else cout << pos - neg << "\n";

    return 0;
}

