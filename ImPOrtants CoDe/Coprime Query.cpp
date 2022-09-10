#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

#define Max 200005

bool composite[Max + 5];
vector <int> primes;
int freq[Max + 5];

void seive()
{
    composite[1] = true;
    for(int i = 2; i*i <= Max; i++)
    {
        if(composite[i] == false)
        {
            for(int j = i * i; j <= Max; j += i)
            {
                composite[j] = true;
            }
        }
    }
    primes.push_back(2);
    for(int i = 3; i <= Max; i += 2)
    {
        if(!composite[i])
            primes.push_back(i);
    }
}

bool checkBit(int n, int i)
{
    return (n & (1 << i)) > 0;
}

vector <int> factorize(int num)
{
    vector<int> factors;
    for(int i = 0; i < primes.size() && primes[i] <= num/primes[i]; i++)
    {
        if(num % primes[i] == 0)
        {
            factors.push_back(primes[i]);

            while(num % primes[i] == 0)
            {
                num /= primes[i];
            }
        }
    }
    if(num > 1) factors.push_back(num);
    return factors;
}

void process(int num)
{
    auto factors = factorize(num);

    int sz = factors.size();

    for(int mask = 1; mask < (1 << sz); mask++)
    {
        int constructedNum = 1;
        for(int i = 0; i < sz; i++)
        {
            if(checkBit(mask,i))
            {
                constructedNum *= factors[i];
            }
        }
        freq[constructedNum]++;
    }
}

int get_answer(int num, int N)
{
    auto factors = factorize(num);
    int sz = factors.size();
    int result = 0;
    for(int mask = 1; mask < (1 << sz); mask++)
    {
        int constructed_num = 1;
        int parity = 0;
        for(int i = 0; i < sz; i++)
        {
            if(checkBit(mask, i))
            {
                 constructed_num *= factors[i];
                 ++parity;
            }
        }
        if(parity % 2 == 0)
            result -= freq[constructed_num];
        else
            result += freq[constructed_num];
    }
    return N - result;
}

int main()
{
    seive();

    int N, Q;
    scanf("%d %d", &N, &Q);

    for(int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);

        process(num);
    }

    for(int i = 0; i < Q; i++)
    {
        int query_num;
        scanf("%d", &query_num);

        printf("%d\n", get_answer(query_num,N));
    }

    return 0;
}
