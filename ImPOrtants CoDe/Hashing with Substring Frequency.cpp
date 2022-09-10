#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int Max = 1000005;
const int Base = 129;
const int Mod = 1e9 + 7;

ll prefixVal[Max + 5], po[Max + 5];
void generate_prefixHash(string &s)
{
    prefixVal[0] = s[0] - 'a' + 1;
    for(int i = 1; i < s.size(); i++)
    {
        prefixVal[i] = ((prefixVal[i-1] * Base) + (s[i] - 'a' + 1)) % Mod;
    }
    po[0] = 1;
    for(int i = 1; i <= s.size(); i++)
    {
        po[i] = (po[i-1] * Base) % Mod;
    }
}

ll get_HashOfs1(string &s)
{
    ll res = 0;
    for(auto &x : s)
    {
        res = ((res * Base) + (x - 'a' + 1)) % Mod;
    }
    return res;
}

ll getHash(ll l, ll r)
{
    if(l == 0) return prefixVal[r];
    return (((prefixVal[r] - (prefixVal[l - 1] * po[r - l + 1])) % Mod) + Mod) % Mod;
}

int main()
{
    int T, cs = 1;
    cin >> T;

    while(T--)
    {
        string s, s1;
        cin >> s >> s1;
        generate_prefixHash(s);
        auto hash_value = get_HashOfs1(s1);
        int cnt = 0;
        for(int i = 0; i + s1.size() <= s.size(); i++)
        {
            if( getHash(i, i + s1.size()-1) == hash_value)
                ++cnt;
        }
        cout << "Case " << cs++ << ": " << cnt << "\n";
    }

    return 0;
}

