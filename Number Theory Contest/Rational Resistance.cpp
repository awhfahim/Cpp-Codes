#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll get_res(ll a, ll b)
{
    if(a == 1) return b;
    if(b == 1) return a;

    ll quotient, remainder;
    if( a > b )
    {
        quotient = a / b;
        remainder = a % b;

        if(remainder == 0) return quotient;
        ll cnt = 0;
        while(remainder != 0 && b != 0)
        {
            ++cnt;
            if(b > remainder)
            {
                b = b - remainder;
            }
            else
            {
                remainder = remainder - b;
            }
        }
        return quotient + cnt;
    }
    else
    {
        quotient = b / a;
        remainder = b % a;

        if(remainder == 0) return quotient;
        ll cnt = 0;
        while(remainder != 0 && a != 0)
        {
            ++cnt;
            if(a > remainder)
            {
                a = a - remainder;
            }
            else
            {
                remainder = remainder - a;
            }
        }
        return quotient + cnt;

    }

}

int main()
{
    ll a, b;
    cin >> a >> b;

    cout << get_res(a,b);
    return 0;
}

