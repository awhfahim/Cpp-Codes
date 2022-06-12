#include <bits/stdc++.h>
using namespace std;

bool does_Exist(vector <int> &arr, int elem)
{
    int L = 0, R = arr.size()-1;
    while(L <= R)
    {
        int M = L + (R-L)/2;
        if(arr[M]==elem) return true;
        if(arr[M]<elem)
        {
            L = M + 1;
        }
        else
        {
            R = M - 1;
        }
    }
    return false;
}
int main()
{
    int elem;
    cin >> elem;

    vector <int> arr = {1,2,3,4,5,6,7,8,9,10};
    /*
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    */

    cout << does_Exist(arr, elem);
    return 0;
}
