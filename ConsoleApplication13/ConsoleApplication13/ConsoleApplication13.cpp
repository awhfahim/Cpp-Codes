#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll calculate_result(ll n, ll h, vector<ll>& numbers)
{
    if (n > h) return 1;
    ll quotient = h / n;
    ll remainder = h % n;

    vector <ll> substraction_result;

    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = i + 1; j <= i + 1; j++)
        {
            ll s = numbers[i] + 1;
            ll sub = numbers[j] - s;
            substraction_result.push_back(sub);
        }
    }
    substraction_result[0]++;
    ll sum = 0; int memorize = 1;
    for (auto it : substraction_result)
    {
        //cout << it-1 << " ";
        if (it < quotient) sum += quotient - it;
        if (it > quotient) memorize++;
    }
    return (sum / memorize) + quotient + remainder;
}

int main()
{
    int test_case;
    //scanf("%d", &test_case);
    cin >> test_case;  

    while (test_case--)
    {
        ll n, h;
        //scanf("%lld %lld", &n, &h);
        cin >> n >> h;
        vector <ll> numbers;
        for (int i = 0; i < n; i++)
        {
            ll num;
            //scanf("%lld", &num);
            cin >> num;
            numbers.push_back(num);
        }
        cout << calculate_result(n, h, numbers) << "\n";
    }

    return 0;
}
