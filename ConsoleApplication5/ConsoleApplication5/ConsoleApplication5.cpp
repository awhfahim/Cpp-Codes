#include <bits/stdc++.h>
using namespace std;
#define MAX 10000005

bool Composite[MAX + 5];
vector<long long>primes = { 2 };

void generatesprime()
{
    Composite[1] = true;
    for (long long i = 2; i * i <= MAX; i++)
    {
        if (Composite[i] == false)
        {
            for (long long j = i * i; j <= MAX; j += i)
            {
                Composite[j] == true;
            }
        }
    }
    for (long long p = 3; p <= MAX; p += 2)
    {
        if (Composite[p] == false)
        {
            primes.push_back(p);
        }
    }
}

int main()
{
    generatesprime();
    cout << primes.size();
    long long n;
    /*while(scanf("lld", &n)==1)
    {
        if(n==0) break;
        if(n<0) n = (-1) * n;

    } */
    return 0;
}
