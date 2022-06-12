#include <bits/stdc++.h>
using namespace std;

void primeFactors(int n)
{
    int c = 2, i = 1, sum = 0;
    while (n > 1)
    {
        if (n % c == 0)
        {
            sum++;
            //cout<<c<<" ";
            n /= c;
        }
        else
        {
            c++;
            i *= (sum + 1);
            sum = 0;
        }
    }
    cout << i;
}
int main()
{
    int a = 3;
    int b;
    b = (++a) + (++a) + (--a);
    cout << b ;
    return 0;
}

