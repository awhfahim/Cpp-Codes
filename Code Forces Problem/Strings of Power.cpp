#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int sz = s.length();
    vector <int> vc;
    for(int i = 0; i < sz-4; i++)
    {
        if(i+4 < sz)
        {
            if(s[i] == 'h' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'y')
            {
                vc.push_back(i);
            }
        }
    }
    vc.push_back(-1);
    for(int i = 0; i < sz-4; i++)
    {
        if(i+4 < sz)
        {
            if(s[i] == 'm' && s[i+1] == 'e' && s[i+2] == 't' && s[i+3] == 'a' && s[i+4] == 'l')
            {
                vc.push_back(i);
            }
        }
    }
    int Mid = 0;
    for(int i = 0; i < vc.size(); i++)
    {
        if(vc[i] == -1)
        {
            Mid = i;
            break;
        }
    }
    int ans = 0;
    for(int j = 0; j < Mid; j++)
    {
        int temp = Mid + 1;
        while(vc[j] > vc[temp]) temp++;
        if(temp <= vc.size())
        {
            while(vc[j] < vc[temp])
            {
                ans++;
                temp++;
            }
        }
    }
    cout << ans;
    return 0;
}

