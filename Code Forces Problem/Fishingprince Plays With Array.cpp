#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<pair <ll, ll>>> res;
    for(int i = 0; i < 2; i++)
    {
        int k;
        if(i == 0) k = n;
        else
        {
            int num;
            cin >> num;
            k = num;
        }
        vector <ll> a(k);
        for(ll& x : a) cin >> x;
        vector<pair<ll,ll>> freq;
        for(auto x : a)
        {
            ll cnt = 1;
            while( x % m == 0)
            {
                x /= m;
                cnt *= m;
            }
            if(freq.empty() || freq.back().first != x)
                freq.push_back(make_pair(x,cnt));
            else
            {
                freq.back().second += cnt;
            }
        }
        res.push_back(freq);
    }
    if(res[0] == res[1]) cout << "Yes" << "\n";
    else  cout << "No" << "\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

