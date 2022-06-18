#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll get_result(ll k)
{
    return (k*1ll*(k+1))/2;
}

int main()
{
    int test_case;
    scanf("%d", &test_case);

    while(test_case--)
    {
        ll k,x;
        scanf("%lld %lld", &k, &x);
        ll l = 1, r = (2 * k) - 1;
        ll res = (2 * k) - 1;

        bool over = false;

        while(l <= r)
        {
            ll mid = l + (r - l)/2;
            if(mid >= k)
            {
                over = (get_result(k) + get_result(k - 1) - get_result((2 * k) - 1 - mid) >= x);
            }
            else{
                over = (get_result(mid) >= x);
            }
            if(over)
            {
                res = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
