#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO();
    int test_Case;
    cin >> test_Case;


    long long int n = 0, B, x, y;
    cin >> n >> B >> x >> y;
    long long int arr[n];
    arr[0] = 0;

    while (test_Case--)
    {
        for (int i = 1; i <= n; i++)
        {
            long long int cond1 = (arr[i - 1]) + x;
            long long int cond2 = (arr[i - 1]) - y;
            if (cond1 <= B)
            {
                cin >> arr[cond1];
            }
            else {
                cin >> arr[cond2];
            }

        }
    }

    for (auto it : arr)
    {
        cout << it << endl;
    }
}