#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector <int> pos;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1')
        {
            pos.push_back(i);
        }
    }
    int Mid = pos.size() / 2;
    int ans = 0, temp = 0;
    for(int i = 0; i <= Mid; i++)
    {
        if(ans < k)
        {
            ans += pos[i] - 0 - temp;
            temp++;
        }
    }
    temp = 0;
    for(int i = Mid + 1; i < s.length(); i++)
    {
        if(ans < k)
        {
            ans += s.length() - pos[i]
        }
    }

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

