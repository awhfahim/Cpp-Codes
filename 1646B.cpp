#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n);

        long long w = arr[0]+arr[1];
        long long q = arr[n-1];
        int h = 3;

        for(int j = 2; j < n; j++)
        {
            if(w < q)
            {
                cout << "yes" << endl;
                break;
            }
            else
            {
                int u = h + 2;
                h = u;
                w = w + arr[j];
                q = q + arr[n-j];
            }
            if(h>n)
            {
                cout << "No" << endl;
                break;
            }
        }
    }
    return 0;
}
