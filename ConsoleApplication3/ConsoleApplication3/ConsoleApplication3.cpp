#include <bits/stdc++.h>
using namespace std;
#define MAX 100

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
    seive(100);
    ///cout << primes.size();
    int Test_Case;
    //scanf("%d", &Test_Case);
    cin >> Test_Case;


    while (Test_Case--)
    {
        int num;
        //scanf("%d", &num);
        cin >> num;
        if (num < 7)
        {
            cout << 1 << "\n";
        }
        else
        {
            int t = 1;
            int LeftPointer;
            int RightPointer;
            int memorize = 0;


            while (LeftPointer <= RightPointer)
            {
                int LeftPointer = primes[t];
                int RightPointer = num - LeftPointer;
                int sum = det(RightPointer);
                if (sum == true)
                {
                    memorize++;
                    t++;
                }
                if (sum == false)
                {
                    t++;
                }
            }
            cout << memorize << "\n";
        }
    }

    return 0;
}

