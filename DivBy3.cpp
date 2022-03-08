#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Test_Case;
    cin >> Test_Case;

    for(int i = 1; i<=Test_Case; i++)
    {
        long long A,B;
        cin >> A >> B;

        long long n = 0;
        int result = 0;
        while(A <= B)
        {
            n = A*(A+1)/2;
            if(n%3==0)
            {
                result++;
            }
            A++;
        }
        cout <<"Case "<< i <<": "<< result <<endl;
    }
}
