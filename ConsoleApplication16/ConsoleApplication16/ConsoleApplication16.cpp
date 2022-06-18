#include <bits/stdc++.h>
using namespace std;

vector <int> result(int c, int N, vector <int>& farms, int last)
{
    int sum = 0;
    for (auto it : farms)
    {
        sum += it;
    }
    vector <int> s = { sum };
    for (int i = 1; i <= last; i++)
    {
        sum *= 2;
        s.push_back(sum);
    }
    return s;
}

int main()
{
    int C, N, M;
    scanf("%d %d %d", &C, &N, &M);
    //cin >> C >> N >> M;

    vector <int> farms;
    vector <int> days;
    for (int i = 0; i < N; i++)
    {
        int nums;
        scanf("%d", &nums);
        //cin >> nums;
        farms.push_back(nums);
    }
    for (int i = 0; i < M; i++)
    {
        int day;
        scanf("%d", &day);
        //cin >> day;
        days.push_back(day);
    }
    int last_day = days[days.size() - 1];
    auto res = result(C, N, farms, last_day);
    for (auto it : days)
    {
        if (it == 0)
        {
            cout << N << "\n";
        }
        else
        {
            int q = res[it] / C;
            int r = res[it] % C;
            if (r > 0) cout << q + 1 << "\n";
            else cout << q << "\n";
        }
    }

    return 0;
}
