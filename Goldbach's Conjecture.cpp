#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000

bool component[MAX + 5];
vector <int> primes;

bool det(int Number)
{
    int L = 0;
    int R = primes.size() - 1;

    while (L <= R)
    {
        int M = L + (R - L) / 2;
        if (primes[M] == Number) return 1;
        if (primes[M] < Number) L = M + 1;
        if (primes[M] > Number) R = M - 1;
    }
    return 0;
}


void seive(int n)
{
    component[1] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (component[i] == false)
        {
            for (int j = i * i; j <= n; j += i)
            {
                component[j] = true;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (component[i] == false)
        {
            primes.push_back(i);
        }
    }

}

int main()
{
    seive(10000000);
    ///cout << primes.size();
    int Test_Case;
    scanf("%d", &Test_Case);
    //cin >> Test_Case;
    int cs = 1;

    while (Test_Case--)
    {
        int num;
        scanf("%d", &num);
        //cin >> num;
        if (num < 7)
        {
            cout << "Case " << cs++ << ": "<< 1 << "\n";
        }
        else
        {
            int t = 1;
            int LeftPointer = primes[t];
            int RightPointer = num - LeftPointer;;
            int memorize = 0;


            while (LeftPointer <= RightPointer)
            {
               // int LeftPointer = primes[t];
                //cout << LeftPointer << "L" << "\n";
                int RightPointer = num - LeftPointer;
                if(LeftPointer>RightPointer) break;
               // cout << RightPointer << "R" << "\n";
                int sum = det(RightPointer);
                if (sum == true)
                {
                    memorize++;
                    LeftPointer=primes[t++];
                }
                if (sum == false)
                {
                    LeftPointer=primes[t++];
                }
            }
            cout << "Case " << cs++ << ": "<< memorize << "\n";
        }
    }

    return 0;
}

