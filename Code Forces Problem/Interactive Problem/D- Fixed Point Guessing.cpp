#include <bits/stdc++.h>
using namespace std;

int ask(int l, int r) {
    cout << "? " << l << " " << r << endl;
    int cnt = 0;
    for(int i = 1; i <= r - l + 1; i++) {
        int x;
        cin >> x;
        if(l <= x && x <= r) cnt += 1;
    }
    return cnt & 1;
}
void solve() {
    int n;
    cin >> n;
    int l = 1, r = n;
    while(l < r) {
        int mid = (l + r) >> 1;
        if(ask(l, mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << "! " << l << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
