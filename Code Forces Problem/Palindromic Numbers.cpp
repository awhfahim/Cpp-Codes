#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector <ll> vc;
    int sz = s.length();
    if (s[0] == '9')
    {
        ll res = 0;
        int carry = 0;
        for (int i = sz - 1; i > -1; i--)
        {
            int a;
            a = (s[i] - '0') + carry;
            if (a > 1)
            {
                res = (1 + 10) - a;
                vc.push_back(res);
                carry = 1;
            }
            else
            {
                res = 1 - ((s[i] - '0') + carry);
                carry = 0;
                vc.push_back(res);
            }
        }
    }
    else
    {
        ll res = 0;
        for (int i = sz - 1; i > -1; i--)
        {
            res = 9 - (s[i] - '0');
            vc.push_back(res);
        }
    }
    reverse(vc.begin(), vc.end());
    for (auto it : vc)
    {
        cout << it;
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

