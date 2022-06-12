#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 11

ll bm(ll a, ll b)
{
    if (b == 0) return 1;
    if (b % 2 == 0)
    {
        ll r = bm(a, b / 2) % M;
        return (r * r) % M;
    }
    return a * bm(a, b - 1) % M;
}

int main()
{
    cout << bm(2, 4);
    return 0;
}
