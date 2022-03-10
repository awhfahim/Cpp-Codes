#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    for(int k=0;k<t;k++){
       long long l,r,a;
        cin >> l >> r >> a;

        long long x = (r / a) + (r % a);

        long long val = (r / a) * a - 1;
        //cout << val << endl;

        if(val<l)
            val = l;
        long long y = (val / a) + (val % a);
        //cout << y << endl;

        cout << max(x, y) << endl;

    }
    return 0;
}
