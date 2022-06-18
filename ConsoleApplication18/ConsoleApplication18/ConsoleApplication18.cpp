#include <bits/stdc++.h>
using namespace std;
#define ll long long

set <ll> s1;
void get_result(ll a, ll b, ll x)
{
    if (a == x || b == x)
    {
        s1.insert(a);
        s1.insert(b);
        return;
    }
    if (x > max(a, b) || a == 0 || b == 0) return;
    s1.insert(a);
    s1.insert(b);
    if (a < b) swap(a, b);

    ll result = a - b;
    s1.insert(result);

    while (result > 0)
    {
        if (b > result) swap(result, b);
        result -= b;
        s1.insert(result);
    }

}

int main()
{
    int test_case;
    //scanf("%d", &test_case);
    cin >> test_case;
    while (test_case--)
    {
        ll a, b, x;
        //scanf("%lld %lld %lld", &a, &b, &x);
        cin >> a >> b >> x;
        get_result(a, b, x);

        if (s1.count(x)) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
