#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll get_phi(ll m)
{
    ll res = m;
    for(ll i = 2; i*i <= m; i++)
    {
        if(m % i == 0)
        {
            res /= i;
            res *= (i - 1);
            while(m % i == 0)
            {
                m/=i;
            }
        }
    }
    if(m > 1)
    {
        res /= m;
        res *= (m - 1);
    }
    return res;
}

ll big_mod(ll a, ll b)
{
    if (b == 0) return 1;
    if( b % 2 == 0)
    {
        ll r = (big_mod(a, b/2));
        return r * r;
    }
    return a * big_mod(a, b - 1);
}

ll f(ll n, ll m)
{
    if(m == 1) return 1;
    return f(big_mod(n-1, get_phi(m)), get_phi(m));

}

int main()
{
    ll n, m;
    scanf("%lld %lld", &n, &m);

    //cout << get_phi(m);

    ll po = f(n-1,m);
    cout << "\n";
    cout << po ;

    return 0;
}
