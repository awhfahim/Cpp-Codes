#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    int m = 4;
    vector<vector<int>> vec(n, vector <int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            vec[i][j] = j + i + 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(auto it = vec[i].begin(); it != vec[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << "\n";
    }

    return 0;
}
