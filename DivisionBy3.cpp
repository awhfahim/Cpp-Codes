#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T_case;
    cin >> T_case;

    for(int i = 1; i <= T_case; i++)
    {
        int A,B;
        cin >> A >> B;

        vector <int> vec;
        vec.push_back(A);
        int C = A;

        while(A!=1)
        {
            int A1;
            A1 = A - 1;
            vec.push_back(A1);
            A = A1;
        }
        sort(vec.begin(), vec.end());

        int sum = 0;
        int total = 0;
        int result = 0;
        for(auto i : vec)
        {
            sum = sum + i;
        }
        if(sum%3==0)
        {
            result++;
        }

        while(C!=B)
        {
            C++;
            vec.push_back(C);
            for(auto i : vec)
            {
                total = total + i;
            }
            if(total % 3 == 0)
            {
                result++;
            }
            total = 0;
        }
        cout <<"Case "<< i <<": "<< result <<endl;
    }
    return 0;
}
