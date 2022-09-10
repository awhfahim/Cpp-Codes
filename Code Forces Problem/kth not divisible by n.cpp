#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll get_res(ll a, ll b)
{
    ll l = 1, r = 2000000000;

    while(l < r)
    {
        ll m =  l + (r - l)/2;

        int res = m - (m/a);
        if(res < b) l = m + 1;
        else
            r = m;
    }
    return l;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int t;
     cin >> t;

     while(t--)
     {
         ll n, k;
         cin >> n >> k;

         cout << get_res(n,k) << "\n";
     }

    return 0;
}

