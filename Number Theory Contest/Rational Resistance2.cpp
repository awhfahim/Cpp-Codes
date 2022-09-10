#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    ll a, b;
    cin >> a >> b;

    ll cnt = 0;

    while(a > 0 && b > 0)
    {
        if(a > b)
        {
            cnt += (a / b);
            a = a % b;
        }
        else{
            cnt += (b / a);
            b = b % a;
        }
    }
    cout << cnt;

    return 0;
}

