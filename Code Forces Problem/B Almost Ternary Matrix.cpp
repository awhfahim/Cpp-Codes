#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << ((i/2 + j/2)&1) << " ";
        }
        cout << "\n";
    }
}
int main()
    {
        ios_base :: sync_with_stdio(false);
        cin.tie(0);

        int t;
        cin >> t;

        while(t--)
        {
            solve();
        }

        return 0;
    }

