#include <bits/stdc++.h>
using namespace std;
const int Max = 500005;

vector <int> divs[Max + 5];

void generateDivisors(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j <= n; j+=i)
        {
            divs[j].push_back(i);
        }
    }
}

int main()
{
    generateDivisors(Max);
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int N, K, sum = 0;
        scanf("%d %d", &N, &K);

        for(auto it : divs[N])
        {
            if( it % K != 0)
                {
                    sum += it;
                }
        }
        printf("%d\n", sum);
    }

    return 0;
}

