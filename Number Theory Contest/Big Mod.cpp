#include <bits/stdc++.h>
using namespace std;
#define ll long long

//ll get_result(int B,int P, int M)
//{
//    if(P == 0) return 1;
//    if(P % 2 == 0)
//    {
//        ll r = (get_result(B, P/2, M)) % M;
//        return (r * r) % M;
//    }
//    return ( B * get_result(B, P - 1, M)) % M;
//}

ll get_result(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


int main()
{
    ll B,P,M;

    while(scanf("%lld %lld %lld", &B, &P, &M))
    {
        printf("%lld\n", get_result(B,P, M));
    }
    return 0;
}

