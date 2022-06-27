#include <bits/stdc++.h>
using namespace std;
#define ll long long

void reversearr(int *arr, int L, int R)
{
    if(L >= R) return;
    swap(arr[L], arr[R]);
    reversearr(arr, L + 1, R - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[] = {1,2,3,4,4,5,6,7,8};
    reversearr(arr, 0, 8);
    for(auto it : arr)
    {
        cout << it << " ";
    }



    return 0;
}

