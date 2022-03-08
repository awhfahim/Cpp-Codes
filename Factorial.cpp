#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Test_Case;
    cin >> Test_Case;

    for(int i = 1; i <= Test_Case; i++)
    {
        long long int n;
        cin >> n;

        long long int arr[21] = {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,
                                 355687428096000,6402373705728000,121645100408832000,2432902008176640000
                                };

        vector <int> vec;

        for(int i = 20; i>-1; i--)
        {
            if(arr[i] <= n)
            {
                n = n - arr[i];
                vec.push_back(i);
            }
        }

        cout << "Case "<<i<<": ";

        if(n == 0)
        {
            sort(vec.begin(), vec.end());
            int s = vec.size();

            if(s>1)
            {
                for(int j = 0; j<s-1; j++)
                {
                    cout << vec[j] <<"!+";
                }
                cout << vec[s-1]<<"!";
            }
            else{
                cout << vec[s-1]<<"!";
            }

            cout << endl;
        }
        else{
            cout << "impossible" << endl;
        }
    }
}
