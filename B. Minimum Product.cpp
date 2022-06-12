#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int test_case;
    scanf("%d", &test_case);
    while(test_case--)
    {
        int a, b, x, y, n;
		cin >> a >> b >> x >> y >> n;
		long long ans = 1e18;
		for (int i = 0; i < 2; ++i) {
			int da = min(n, a - x);
			int db = min(n - da, b - y);
			ans = min(ans, (a - da) * 1ll * (b - db));
			swap(a, b);
			swap(x, y);
		}
		cout << ans << endl;
    }

    return 0;
}
