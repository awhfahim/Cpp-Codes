#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int L = 1, R = 1000000;

    int ans = -1;
    while( L <= R)
    {
        int Mid = (L + R)/2;
        cout << Mid << endl;
        cout << flush;
        string s;
        cin >> s;
        if(s == "<")
        {
            R = Mid - 1;
        }
        else{
            ans = max(Mid, ans);
            L = Mid + 1;
        }
    }
    cout << "! " << ans << endl;
    cout << flush;
    return 0;
}

