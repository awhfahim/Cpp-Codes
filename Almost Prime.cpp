#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

bool Composite[MAX + 5];

void seive(int Num)
{
    Composite[1] = true;
    for (int i = 2; i * i <= Num; i++)
    {
        if (Composite[i] == false)
        {
            for (int j = i * i; j <= Num; j += i)
            {
                Composite[j] = true;
            }
        }
    }
    int primecount = 0;
    for(int i = 1; i <= Num; i++)
    {
        primecount += Composite[i]==false;
    }
}
int main()
{
    seive(1000000);
    int Number; int sum = 0;
    scanf("%d", &Number);


    for (int i = 6; i <= Number; i++)
    {
        if (Composite[i] == true)
        {
            int t = 0;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    int prime = i / j;
                    if (prime == j) break;
                    if (Composite[prime] == false) t++;
                    if (Composite[j] == false)t++;
                }
            }
            if (t == 2) sum++;
        }
    }
    cout << sum << "\n";

    return 0;
}
