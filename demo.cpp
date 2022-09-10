#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> intervals = {{0,30},{5,10},{15,20}};
//    for(int i = 0; i < intervals.size(); i++)
//    {
//        for(auto it = intervals[i].begin(); it != intervals[i].end(); it++)
//        {
//            cout << *it << " ";
//        }
//          cout << "\n";
//
//    }

        map <int, int> stats;
        for(auto interval : intervals)
        {
            stats[interval[0]]++;
            stats[interval[1]]--;
        }
            for(auto it = stats.begin(); it != stats.end(); it++)
            {
                cout << it->first << " " << it->second << "\n";
            }
            cout << "\n";

        int curr = 0, min_room = 0;
        for(auto stat : stats)
        {
            curr += stat.second;
            min_room = max(min_room, curr);
        }
        cout << min_room ;
    return 0;
}

