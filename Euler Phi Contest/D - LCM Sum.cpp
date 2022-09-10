#include <bits/stdc++.h>
using namespace std;

const int Max = 1000005;

long long int phi[Max + 5];
void seiveforphi(int N)
{
    for(int i = 1; i <= N; i++)
        phi[i] = i;

    for(int i = 2; i <= N; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i; j <= N; j += i)
            {
                phi[j] -= phi[j]/i;
            }
        }
    }
}

long long int divisors[Max + 5];
void generateDivisors(int N)
{
    for(int i = 1; i <= N; i++)
    {
        for(int j = i; j <= N; j += i)
        {
            divisors[j] += (i * phi[i]);
        }
    }
}

long long solve(int n)
{
    long long answer = divisors[n];

    answer = (answer + 1) * n;
    answer /= 2;

    return answer;
}

int main()
{
    seiveforphi(Max);
    generateDivisors(Max);

    int T;
    scanf("%d", &T);

    while(T--)
    {
        int n;
        scanf("%d", &n);

        //cout << divisors[1000000] << "\n";
        printf("%lld\n", solve(n));
    }

    return 0;
}

