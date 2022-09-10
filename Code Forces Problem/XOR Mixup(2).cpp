#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int maxn = 2e5 + 10;
long long a[maxn];

int main() {
  ios_base :: sync_with_stdio (false);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;

    map <int, int> cnt;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x] += 1;
    }

    n = 0;
    for(auto [num, freq] : cnt) {
        freq = min(freq, 3);
        while(freq--) a[n++] = num;
    }
    sort(a, a + n);

    if(n >= 3) {
        if(a[0] + a[1] + a[2] < a[0] || a[n - 3] + a[n - 2] + a[n - 1] > a[n - 1]) {
            cout << "No" << endl;
            continue;
        }
    }
    bool good = true;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                long long sum = a[i] + a[j] + a[k];
                bool found = false;
                for(int x = 0; x < n; x++) {
                    if(a[x] == sum) found = true;
                }
                good &= found;
            }
        }
    }
    cout << (good ? "YES" : "NO") << endl;
  }
}



