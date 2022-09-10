#include <bits/stdc++.h>
using namespace std;

int cnt= 0;
void factors(int n, int i)
{
    if (i <= n)
    {
        if (n % i == 0)
        {
            cnt++;
        }
        factors(n, i + 1);
    }
}

int main()
{
    int N = 36;
    factors(N, 1);
    cout << cnt;
    return 0;
}

