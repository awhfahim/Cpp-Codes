#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool checkBit(int n, int i)
{
    return ( n & (1 << i)) > 0;
}

int main()
{
    vector <int> nums = {2,3,5,7,11,13};
    int sz = nums.size();

    for(int mask = 1; mask < (1 << sz); mask++)
    {
        for(int i = 0; i < sz; i++)
        {
            if(checkBit(mask, i))
            {
                cout << nums[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

