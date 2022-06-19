#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int item, int left, int right) /// [2,5,[6],7,9,12],3
{
    while(left <= right) /// low = 0, high = 5, item = 3
    {
        int mid = left + (right - left)/2; /// 2
        if(item == arr[mid]) return mid + 1;
        else if(item > arr[mid])
        {
            left = mid + 1;/// 1
        }
        else right = mid - 1; /// 1
    }
    return left;
}

void insertion_sort(int *arr, int n)
{
    int key,j,loc;
    for(int i = 1; i < n; ++i) /// i = 6
    {
        key = arr[i]; /// key = 3
        j = i - 1; /// j = 5

        loc = binarySearch(arr, key, 0, j); /// 1

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
    int arr[] = { 7,6,5,12,9,2,1 };
    int sz = sizeof(arr) / sizeof(arr[0]), i;

    insertion_sort(arr,sz);

    for(auto it : arr)
    {
        cout << it << "\n";
    }
    return 0;
}
