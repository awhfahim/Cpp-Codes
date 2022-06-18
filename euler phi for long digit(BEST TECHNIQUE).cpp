#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n) ///NO Need of this Primality Check it creates overhead complexities
{
    if(n < 2) return false;
    for(ll i = 2; i*i<=n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

ll euler_phi(ll n)
{
    //if(isPrime(n) == true) return n - 1;
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
    //cin >> n;
    cout << euler_phi(1000000000000000000);

    return 0;
}
