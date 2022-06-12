#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    long long int k,low, high;
    cin >> k >> low >> high;

    int result = 0;

    /*
    if(low < 5 && low % 2 == 0)
    {
        low+=1;
        result+=1;
    }
    else if(low==3)
    {
        result+=1;
    }
    else if(low%2==0)
    {
        low+=1;
    } */

    for(long long int i = low; i<=high; i++)
    {
        int total = 0;
        //cout << i << "\n";

        for(long long int j = 1; j <=i; j++)
        {
            if(i%j==0)
            {
                total++;
            }
        }

         if(total==k)
         {
             result++;
         }
    }
    cout << result << "\n";
    return 0;
}
