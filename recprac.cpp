#include <bits/stdc++.h>
using namespace std;

vector <int> subset;
void genSubset(vector <int> &arr, int currPos)
{
    if(currPos == arr.size())
    {
        for(auto it : subset)
        {
            printf("%d ", it);
        }
        printf("\n");
        return;
    }
    genSubset(arr, currPos + 1);
    subset.push_back(arr[currPos]);
    genSubset(arr, currPos + 1);
    subset.pop_back();


}

int find_min_cost(int a, int b)
{
    if ( a <= 0 || b <= 0) return INT_MAX / 2;
    if ( a == 1 && b == 1) return 0;
    if ( a < b )
    {
        int k = (b-a)/a;
        if(k > 0) return k + find_min_cost(a, b - (k*a));
        else return 1 + find_min_cost(a, b-a);
    }
    int k = (a-b)/b;
    if( k > 0)
    {
        return k + find_min_cost( a - (b * k), b);
    }
    return 1 + find_min_cost(a-b, b);

}

int main()
{
    int n;
    cin >> n;
    int min_cost = INT_MAX / 2;
    cout << find_min_cost(2,5);
    return 0;
    for (int i = 1; i <= n; i++)
    {
        min_cost = min(min_cost, find_min_cost(i, n));
    }
    cout << min_cost << "\n";
    return 0;
    vector <int> arr = {2,4,7,10};
    genSubset(arr,0);
    return 0;
}
