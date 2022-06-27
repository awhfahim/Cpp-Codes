#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, z;
    cin >> n >> z;
    int m = 0;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        int c = num | z;
        m = max(m,c);
    }
    cout << m << "\n";
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

