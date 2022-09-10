#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX = 1000000;

int arr[MAX + 5];
void divCount()
{
    for(int i = 1; i <= MAX; i++)
    {
        for(int j = i; j <= MAX; j+=i)
        {
            arr[j]++;
        }
    }
}

int main()
{
    divCount();
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);

        int gcd = __gcd(A,B);
        printf("%d\n", arr[gcd]);
    }


    return 0;
}

