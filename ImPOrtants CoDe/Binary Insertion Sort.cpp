#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int item, int low, int high)
{
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(item == arr[mid]) return mid + 1;
        else if(item > arr[mid])
        {
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return low;
}

void insertion_sort(int *arr, int n)
{
    int key,j,loc;
    for(int i = 1; i < n; ++i)
    {
        key = arr[i];
        j = i - 1;

        loc = binarySearch(arr, key, 0, j);

        while(j >= loc)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {3,6,1,654,3,234,234,65,67,44,56,67,5,5,5,5,5,5,6,6,6,6,6,6,6,56,5,75,6,4,64,776,97};
    int sz = sizeof(arr) / sizeof(arr[0]), i;

    insertion_sort(arr,sz);

    for(auto it : arr)
    {
        cout << it << "\n";
    }
    return 0;
}
