#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000

bool composite[MAX + 5];
vector <long long> primes = {2};

long long calculation(long long &n)
{
    if(n==2) return 1;
    int Number = n/2;
    if(Number % 2 == 0) Number++;
    else Number+=2;
    long long a = upper_bound(primes.begin(), primes.end(), n) - lower_bound(primes.begin(), primes.end(), Number);
    return a;
}

void seive()
{
    composite[1]=true;
    for(int i = 2; i * i <= MAX; i++)
    {
        if(composite[i]==false)
        {
            for(int j = i * i; j<=MAX; j+=i)
            {
                composite[j]=true;
            }
        }
    }
    for(int i = 3; i<=MAX; i+=2)
    {
        if(composite[i]==false)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    seive();
    int test_case;
    scanf("%d", &test_case);
    while(test_case--)
    {
        long long n;
        scanf("%lld", &n);
        long long result = calculation(n);
        printf("%lld\n", result);
    }

    return 0;
}
