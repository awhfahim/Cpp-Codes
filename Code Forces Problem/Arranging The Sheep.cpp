#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector <ll> pos;
    int tot = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == '*')
        {
            tot++;
            pos.push_back(i);
        }
    }
    if(pos.empty())
    {
        cout << 0 << "\n";
        return;
    }
    ll ans = 0; ll temp = 1;
    int mid = tot / 2;
    for(int i = 0; i < mid; i++)
    {
        ans += pos[mid] - pos[i]-temp;
        temp++;
    }
    temp = 1;
    for(int i = mid + 1; i < tot; i++)
    {
        ans += pos[i] - pos[mid] - temp;
        temp++;
    }
    cout << ans << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       solve();
    }

    return 0;
}
