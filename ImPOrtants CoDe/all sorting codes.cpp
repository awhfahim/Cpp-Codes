#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int main()
{
    int arr[] = {3,2,5,7,33,22};
    bubble_sort(arr,6);
    for(auto it : arr)
    {
        cout << it << "\n";
    }
    return 0;
}
