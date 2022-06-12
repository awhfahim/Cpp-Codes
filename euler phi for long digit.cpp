#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll euler_phi(ll n)
{
    ll res = n;
    for(ll i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            res *= (i - 1);
            res /= i;

            while(n % i == 0)
            {
                n/=i;
            }
        }
    }
    if(n > 1) res *= (n - 1)/n;
    return res;
}

int main()
{
    ll n;
    cin >> n;
    cout << euler_phi(n);

    return 0;
}
