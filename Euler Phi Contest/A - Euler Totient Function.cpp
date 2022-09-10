#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int phi[MAX + 5];
void seiveforphi(int n)  /// Time Complexity NLogN
{
    for(int i = 1; i <= n; i++)
        phi[i] = i;

    for(int i = 2; i <= n; i++)
    {
        if(phi[i] == i)
        {
            for(int j = i; j <= n; j+=i)
            {
                phi[j] -= phi[j]/i;
            }
        }
    }
}

int main()
{
    seiveforphi(MAX);

    int T;
    scanf("%d", &T);

    while(T--)
    {
        int n;
        scanf("%d",&n);

        printf("%d\n", phi[n]);
    }

    return 0;
}

