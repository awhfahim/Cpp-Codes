#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 2e5 + 10;
ll a[maxn];

void solve()
{
    ll n;
    cin >> n;

    map <int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        cnt[num] += 1;
    }

    n = 0;
    for(auto [num, freq] : cnt)
    {
        freq = min(freq, 3);
        while(freq--)
        {
            a[n++] = num;
        }
    }

//    for(int i = 0; i < n; i++)
//    {
//        int num;
//        cin >> num;
//        a[i] = num;
//    }
//    sort(a, a + n);
    if(n >= 3)
    {
        if(a[0] + a[1] + a[2] < a[0] || a[n - 3] + a[n - 2] + a[n - 1] > a[n - 1])
        {
            cout << "No" << "\n";
            return;
        }
    }
    bool ok = true;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                ll sum = a[i] + a[j] + a[k];
                bool found = false;
                for(int x = 0; x < n; x++)
                {
                    if(a[x] == sum) found = true;
                }
                ok &= found;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << "\n";

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


