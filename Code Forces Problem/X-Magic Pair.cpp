#include <bits/stdc++.h>
using namespace std;
#define ll long long

set <ll> s1;
void get_result(ll a, ll b, ll x)
{
    if(a < b) swap(a,b);

    ll result = a - b;
    s1.insert(result);

    while(result > 0)
    {
        if(b > result) swap(result,b);
        result -= b;
        s1.insert(result);
    }

}

int main()
{
    int test_case;
    //scanf("%d", &test_case);
    cin >> test_case;
    while(test_case--)
    {
        ll a, b, x;
       // scanf("%lld %lld %lld", &a, &b, &x);
       cin >> a >> b >> x;
       get_result(a,b,x);
    }

    return 0;
}
