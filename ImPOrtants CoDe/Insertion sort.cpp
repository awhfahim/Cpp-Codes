#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int sz)
{
    int key,i,j;
    for(i = 1; i < sz; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[] = {4,3,7,8,1,11,13,2,16,19,17};
    int sz = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, sz);

    for(auto it : arr)
    {
        cout << it << "\n";
    }

    return 0;
}
