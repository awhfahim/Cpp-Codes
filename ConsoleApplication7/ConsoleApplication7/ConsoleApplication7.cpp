#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

bool Composite[MAX + 5];
vector<int> primes = { 2 };
vector <long long> DivCount[1500];


long long Up_bound(long long k, long long high)
{
    vector <long long> &thprime = DivCount[k];
    long long L = 0, R = thprime.size();
    while (L < R)
    {
        long long M = L + (R - L) / 2;
        if (thprime[M] > high) R = M;
        else L = M + 1;
    }
    return L;
}

long long Low_bound(long long k, long long low)
{
    vector<long long> &thprime = DivCount[k];
    long long L = 0, R = thprime.size();
    while (L < R)
    {
        long long M = L + (R - L) / 2;
        if (thprime[M] >= low) R = M;
        else L = M + 1;
    }
    return L;
}


void primeFactor(long long n)
{
    int i = 0; long long Pre_Value = n;
    int sum = 0, c = 1;
    while (n > 1)
    {
        if (n % primes[i] == 0)
        {
            sum++;
            n /= primes[i];
        }
        else
        {
            i++;
            c *= (2 * sum) + 1;
            sum = 0;
        }
        if (n == 1) c *= (2 * sum) + 1;
    }
    DivCount[c].push_back(Pre_Value * Pre_Value);
}

void generatesPrime(int n)
{
    Composite[1] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (Composite[i] == false)
        {
            for (int j = i * i; j <= n; j += i)
            {
                Composite[j] = true;
            }
        }
    }
    for (int i = 3; i <= n; i += 2)
    {
        if (Composite[i] == false)
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    generatesPrime(MAX);
    DivCount[1].push_back(1);
    for (int i = 2; i <= 100000; i++)
    {
        primeFactor(i);
    }

    int test_case;
    scanf("%d", &test_case);
    while (test_case--)
    {
        long long k, low, high;
        scanf("%lld %lld %lld", &k, &low, &high);
        long long l = Low_bound(k, low);
        long long h = Up_bound(k, high);
        long long result = h - l;
        printf("%lld\n", result);
    }

    return 0;
}
