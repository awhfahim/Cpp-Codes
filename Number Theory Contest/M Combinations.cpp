#include <bits/stdc++.h>
using namespace std;
int const M = 1000003;

long long get_expo(int a, int b)
{
    if(b == 0) return 1;
    if(b % 2 == 0)
    {
        auto r = (get_expo(a, b/2)) % M;
        return (r * r) % M;
    }
    return (a * get_expo(a, b - 1)) % M;
}

vector <long long> vc;

void get_factorial()
{
    long long res = 1; vc.push_back(1);
    for(int i = 1; i <= 1000005; i++)
    {
        res = (res * i) % M;
        vc.push_back(res);
    }
}

int main()
{
    get_factorial();

    int T, cs = 1;
    scanf("%d", &T);

    while(T--)
    {
        int N, K;
        scanf("%d %d", &N, &K);


        long long numerator = vc[N];

        long long denominator = (vc[K] * vc[N - K]) % M;
        cout << "Case " << cs++ << ": " <<(numerator * get_expo(denominator, M - 2)) % M << "\n";

    }

    return 0;
}

