#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int Max = 10000000 + 5;

vector <int> divisors[Max + 5];
void Generate_divisors(int n)
{
    for(int i = 2; i <= n; i++)
    {
        for(int j = i; j <= n; j += i)
        {
            divisors[j].push_back(i);
        }
    }
}

int main()
{
    Generate_divisors(Max);
    int n;
    //scanf("%d", &n);

    return 0;
}

