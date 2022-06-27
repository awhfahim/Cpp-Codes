#include <bits/stdc++.h>
using namespace std;

int inv_count = 0;
void mergeSubarrays(vector <int>& arr, int L, int R)
{
    vector <int> tempArray;
    int M = L + (R - L) / 2;
    int leftP = L, rightP = M + 1;

    while (leftP <= M && rightP <= R)
    {
        if (arr[leftP] <= arr[rightP])
        {
            tempArray.push_back(arr[leftP]);
            leftP++;
        }
        else
        {
            inv_count += M - leftP + 1;
            tempArray.push_back(arr[rightP]);
            rightP++;
        }
    }

    while (leftP <= M)
    {
        tempArray.push_back(arr[leftP]);
        leftP++;
    }
    while (rightP <= R)
    {
        tempArray.push_back(arr[rightP]);
        rightP++;
    }
    for (int i = L; i <= R; i++)
    {
        arr[i] = tempArray[i - L];
    }
}

void mergeSort(vector <int> t_arr, int L, int R)
{
    if (L >= R) return;
    int M = L + (R - L) / 2;
    mergeSort(t_arr, L, M);
    mergeSort(t_arr, M + 1, R);
    mergeSubarrays(t_arr, L, R);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector <int> arr;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int m;
    cin >> m;

    while (m--)
    {
        int l, r;
        cin >> l >> r;
        while (l < r)
        {
            swap(arr[l-1], arr[r-1]);
            l += 1;
            r -= 1;
        }

        mergeSort(arr, 0, arr.size() - 1);
        if (inv_count % 2 == 0) cout << "even" << "\n";
        else cout << "odd" << "\n";
        cout << inv_count;
        inv_count = 0;
    }

    return 0;
}
