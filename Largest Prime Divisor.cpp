#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000

bool Composite[MAX + 5];
vector<long long>primes = {2};

void generatesprime()
{
    Composite[1]=true;
    for(long long i = 2; i * i <= MAX; i++)
    {
        if(Composite[i]==false)
        {
            for(long long j = i * i; j<=MAX; j+=i)
            {
                Composite[j]=true;
            }
        }
    }
    for(long long p = 3; p<= MAX; p+=2)
    {
        if(Composite[p]==false)
        {
            primes.push_back(p);
        }
    }
}

long long findLPD(long long n)
{
    long long largestdivs = -1;
    vector<long long>primeLPD;
    for(long long i = 0; i < (int)primes.size() && 1LL * primes[i] * primes[i] <= n; i++)
    {
        if(n%primes[i]==0)
        {
            primeLPD.push_back(primes[i]);
            while( n % primes[i]==0)
            {
                n /= primes[i];
            }
        }
    }
    if(n>1)
    {
        primeLPD.push_back(n);
    }
    if(primeLPD.size()==1) return -1;
    for(auto fact : primeLPD)
    {
        largestdivs = max(largestdivs, fact);
    }
    return largestdivs;
}

int main()
{
    generatesprime();

    long long n;
    while(scanf("%lld", &n)==1)
    {
        if(n==0) break;
        if(n<0) n = (-1) * n;
        printf("%lld\n", findLPD(n));
    }
    return 0;
}
