#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        if(n == 2)
        {
            cout << "-1\n";
            continue;
        }
        vector<vector<int>> arr(n, vector <int> (n));
        int flag = 1;
        int k = 1;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(flag)
                {
                    arr[i][j] = k;
                    k++;
                }
                flag = 1 - flag;
            }
        }

        flag = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(flag)
                {
                    arr[i][j] = k;
                    k++;
                }
                flag = 1 - flag;
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }

    }
    return 0;
}
