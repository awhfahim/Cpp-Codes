#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int Max = 50000;

bool composite[Max+5];
vector <int> primes;

void seive()
{
    composite[1] = true;
    for(int i = 2; i*i <= Max; i++)
    {
        if(composite[i] == false)
        {
            for(int j = i*i; j <= Max; j+=i)
            {
                composite[j] = true;
            }
        }
    }
    primes.push_back(2);
    for(int i = 3; i <= Max; i += 2)
    {
        if(!composite[i]) primes.push_back(i);
    }

}

void segmentedSieve(ll l, ll r)
{

    bool isPrime[r-l+1];
    for(ll i=l; i<=r; i++) isPrime[i-l] = 1;

    for(int i=0; i < primes.size() && 1LL * primes[i] * primes[i] <= r; i++ )
    {

        ll firstMultiple = (l/primes[i]) * primes[i];
        if(firstMultiple < l) firstMultiple += primes[i];

        for(ll j=firstMultiple; j <= r; j += primes[i])
        {
            //cout << "for : " << primes[i] << " " << j << endl;
            isPrime[j-l] = 0;
        }
        if(firstMultiple == primes[i]) isPrime[firstMultiple-l] = 1;
    }

    for(ll i=l; i<=r; i++)
    {
        if(i==1) continue;
        if(isPrime[i-l])
        {
            printf("%lld\n", i);
        }
    }
}

int main()
{
    seive();

    int T;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++)
    {
        long long int m, n;
        scanf("%lld %lld", &m, &n);

        segmentedSieve(m, n);
        //if(i != T) printf("\n");
    }

    return 0;
}
