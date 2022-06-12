#include <bits/stdc++.h>
using namespace std;

int cat_present(vector<int>&arr, int P)
{
    int L = 0, R = arr.size()-1;
    while(L<=R)
    {
        int M = L + (R-L)/2;
        if(arr[M]==P) return 1;
        if(arr[M]<P) L = M + 1;
        else R = M - 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        vector<int>arr(k);
        for(int i = 0; i < k; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr.begin(), arr.end());

        int a = arr[arr.size()-1];
        int cat;
        int coun = 0;
        while(arr.size()>0)
        {
            cat++;
            if(a == n)
            {
                arr.pop_back();
                coun++;
            }
            else a++;
            int r = cat_present(arr, cat);
            if(r==1)
            {
                arr.erase(arr.begin()+cat);
            }
        }
        cout << coun << endl;
    }
    return 0;
}
