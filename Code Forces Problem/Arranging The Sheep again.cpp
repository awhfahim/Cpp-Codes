#include <bits/stdc++.h>
using namespace std;

long long get_answer()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector <int> pos;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '*')
        {
            pos.push_back(i);
        }
    }
    if(pos.empty())
    {
        return 0;
    }
    long long ans = 0; int temp = 1;
    int Mid = pos.size() / 2;

    for(int i = 0; i < Mid; i++)
    {
        ans += pos[Mid] - pos[i] - temp;
        temp++;
    }
    temp = 1;
    for(int i = Mid + 1; i < pos.size(); i++)
    {
        ans += pos[i] - pos[Mid] - temp;
        temp++;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long result = get_answer();
        cout << result << "\n";
    }
    return 0;

}
