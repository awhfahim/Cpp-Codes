#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define MOD 7

ll getExpo(ll a, ll b, ll MOD)
{
    if(b==0) return 1;
    if (b % 2 == 0)
    {
        ll half = getExpo(a, b/2, MOD) % MOD;
        return (half * half) % MOD;
    }
    return (a * getExpo(a, (b - 1),MOD)) % MOD;
}

int main()
{
    ll B,P,M;
    //scanf("%ld %ld %ld", &B,&P,&M);

    while(cin>>B>>P>>M)
    {
        cout << getExpo(B,P,M) << endl;
    }
    return 0;
}
