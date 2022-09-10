#include <bits/stdc++.h>
using namespace std;

const int Max = 2000005;

int phi[Max + 5];
void generate_phi(int n)
{
    for(int i = 1; i <= n; i++)
        phi[i] = i;

    for(int i = 2; i <= n; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i; j <= n; j += i)
            {
                phi[j] /= i;
                phi[j] *= (i - 1);

            }
        }
    }
}

long long int ans[Max + 5];
void get_result()
{
    long long int res, depth = 1;
    for(int i = 2; i <= Max; i++)
    {
        res = phi[i], depth = 1;
        while(res > 1)
        {
            res = phi[res];
            depth++;
        }
        ans[i] = depth;
    }
}

int main()
{
    generate_phi(Max);
    get_result();

    int T;
    scanf("%d", &T);

    while(T--)
    {
        int m, n, res = 0;
        scanf("%d %d", &m, &n);

        for(int i = m; i <= n; i++)
        {
            res += ans[i];
        }
        printf("%d\n", res);

    }

    return 0;
}

