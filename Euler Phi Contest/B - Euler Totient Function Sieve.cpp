#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int Max = 1e7;
bool composite[Max + 5];
vector <int> primes;
void seive()
{
    composite[1] = true;
    for(int i = 2; i*i <= Max; i++)
    {
        if(composite[i] == false)
        {
            for(int j = i*i; j <= Max; j += i)
            {
                composite[j] = true;
            }
        }
    }
    primes.push_back(2);
    for(int i = 3; i <= Max; i+=2)
    {
        if(!composite[i]) primes.push_back(i);
    }
}

vector <ll> segmented_seive(ll l, ll r)
{
    vector <ll> phi, freq;
    for(ll i = l; i<=r; i++)
    {
        phi.push_back(i);
        freq.push_back(i);
    }

    for(int i = 0; i < (int)primes.size() && 1LL * primes[i] * primes[i] <= r; i++)
    {
        ll currPrime = primes[i];

        ll base = (l/currPrime) * currPrime;
        if(base < l) base += currPrime;

        for(ll j = base; j <= r; j += currPrime)
        {
            int idx = j - l;
            ll num = freq[idx];
            while(num % currPrime == 0)
            {
                num /= currPrime;
            }
            freq[idx] = num;
            ll val = phi[idx];
            val /= currPrime;
            val *= (currPrime - 1);
            phi[idx] = val;
        }
    }
    for(ll i = 0; i< (r - l + 1); i++)
    {
        if(freq[i] != 1 && freq[i] != phi[i])
        {
            phi[i] /= freq[i];
            phi[i] *= (freq[i] - 1);
        }
        if(phi[i] != 1)
        {
            if(freq[i] == phi[i]) phi[i]--;
        }
    }
    return phi;
}

int main()
{
    seive();

    ll a, b;
    cin >> a >> b;
    auto result = segmented_seive(a,b);

    for(auto &x : result)
    {
        printf("%lld\n", x);
    }

    return 0;
}
