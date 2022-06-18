#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);

    vector<int> prices(n);
    for(int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    sort(prices.begin(),prices.end());
    vector <long long> pref(n+1);
    for(int i = 0; i < n; i++)
    {
        pref[i+1] = pref[i] + prices[i];
    }

    for(int i = 1; i<=q; i++)
    {
        int x,y;
        //scanf("%d %d", &x, &y);
        cin >> x >> y;
        cout << pref[n - (x - y)] - pref[n - x] << "\n";
    }

    return 0;
}
/*
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<long long> pref(n + 1);
  for (int i = 0; i < n; i++) {
    pref[i + 1] = pref[i] + a[i];
  }
  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << pref[n - (x - y)] - pref[n - x] << '\n';
  }
  return 0;
} */
