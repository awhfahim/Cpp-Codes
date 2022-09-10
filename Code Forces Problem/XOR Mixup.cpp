#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> vc;
        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            vc.push_back(num);
        }

        for(int i = 0; i < vc.size(); i++)
        {
            int res = 0;
            for(int j = 1; j < vc.size(); j++)
            {
                res = res ^ vc[j];
            }
            if(res == vc[i])
            {
                cout << res << "\n";
                break;
            }
            else vc[0] = vc[i+1];
        }
    }
    return 0;
}

