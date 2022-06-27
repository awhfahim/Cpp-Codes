#include <bits/stdc++.h>
using namespace std;

mt19937 rd(0);
int quickPartition(vector <int> &data, int L, int R)
{
   // cout << R << "\n";
    int pvt = data[R];
    int Separator = L - 1;

    for(int j = L; j < R; j++)
    {
        if(data[j] <= pvt)
        {
            Separator++;
            swap(data[Separator], data[j]);
        }
    }
    swap(data[Separator + 1], data[R]);
    return Separator + 1;
}

void quickSort(vector <int> &arr, int L, int R)
{
    if (L < R) {
        int partitionPoint = quickPartition(arr, L, R);
        quickSort(arr, L, partitionPoint - 1);
        quickSort(arr, partitionPoint + 1, R);
    }
}

int main()
{
    int n = 10000000;
    vector <int> arr;
    for(int i = 0; i < n; i++)
    {
        arr.push_back(i);
    }
    shuffle(arr.begin(), arr.end(), rd);
    quickSort(arr, 0, (int)arr.size() - 1);

    //for(auto it : arr) cout << it << " ";

    return 0;
}
