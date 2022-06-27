#include <bits/stdc++.h>
using namespace std;

int find_N(int n, int k)
{
    int L = 0, R = 2000000001;
    while(L < R)
    {
        int M = L + (R - L) / 2;
        int cnt = M - (M / n);
        if(cnt < k)
        {
            L = M + 1;
        }
        else R = M;
    }
    return L;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n,k;
        scanf("%d %d", &n, &k);
        printf("%d\n", find_N(n,k));
    }
    return 0;
}
