#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool IsPrime(long long N)
{
    if(N<2) return false;
    for(int i = 2; i*i <= N; i++)
    {
        if(N%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    fastIO();
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        long long int numbers;
        cin >> numbers;

        double num = sqrtl(numbers);
        //cout << num << "\n";
        int nums = sqrtl(numbers);
        //cout << nums << "\n";

        if(num>nums)
        {
            cout << "NO" << "\n";
        }
        else if(IsPrime(num))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}


