#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long divcnt(ll n)
{
    int s = 0;
    if(n % 3 == 0)
    {
        s = n / 3;
    }
    else{
        s = (n / 3) + 1;
    }
    return n - s;
}
int main()
{
    int T_case;
    cin >> T_case;

    for(int i = 1; i <= T_case; i++)
    {
        ll A, B;
        cin >> A >> B;

        ll sum1 = divcnt(A - 1);
        ll sum2 = divcnt(B);
        ll result = sum2 - sum1;

        printf("Case %d: %lld\n", i, result);
    }
    return 0;
}
