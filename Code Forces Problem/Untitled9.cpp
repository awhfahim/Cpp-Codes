#include <bits/stdc++.h>
using namespace std;
#define ll long long

int get_gcd(int a, int b)
{
    if(b == 0) return a;
    return get_gcd(b, a % b);
}

int get_result(int a, int b)
{
    int n = get_gcd(a, b);

    int ans = 0;
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            if(n / i == i)
            {
                ans++;
            }
            else
            {
                ans += 2;
            }
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << get_result(a,b) << "\n";
    }

    return 0;
}

