#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000000
#define ll long long int

ll phi[MAX + 5];
void seiveforphi(ll n)
{
    for(ll i = 1; i <= n; i++)
        phi[i] = i;

    for(ll i = 2; i <= n; i++)
    {
        if(phi[i] == i)
        {
            for(ll j = i; j <= n; j += i)
            {
                phi[j] -= phi[j]/i;
            }
        }
    }

}

int main()
{
    seiveforphi(MAX);
    int test_case;
    //scanf("%d", &test_case);

    while(scanf("%d", &test_case) == 1)
    {
        if (test_case == 0) break;
        ll num;
        scanf("%lld", &num);
        printf("%lld\n", phi[num]);
    }

    return 0;
}
