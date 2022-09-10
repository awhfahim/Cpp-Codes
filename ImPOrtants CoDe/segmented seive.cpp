#include <bits/stdc++.h>
using namespace std;

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

void segmented_seive(long long int b, long long int a)
{
    long long int sz = (a - b) + 1;
    bool isPrime[sz];
    if(b == 1) isPrime[0] = true;
    for(int i = 0; i <(int)primes.size() && 1LL * primes[i] * primes[i] <= a; i++)
    {
        int currPrime = primes[i];
        long long int Base = (b/currPrime) * currPrime;
        if(Base < b) Base += currPrime;
        for(long long int j = Base; j <= a; j += currPrime)
        {
            isPrime[j-b] = true;
        }
        if(Base == currPrime) isPrime[Base - b] = false;
    }

    for(int i = 0; i < sz; ++i)
    {
        if(!isPrime[i])
            printf("%lld\n", i+b);
    }
    printf("\n");

}

int main()
{
    seive();

    int T;
    scanf("%d", &T);

    while(T--)
    {
        long long int b, a;
        scanf("%lld %lld", &b, &a);

        segmented_seive(b, a);
    }

    return 0;
}

