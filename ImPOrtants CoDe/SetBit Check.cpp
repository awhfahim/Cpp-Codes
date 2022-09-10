#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

bool checkBit(int n, int i)
{
    return (n & (1 << i)) > 0;
}

int main()
{
    int a = 5;
    int i = 1;

    cout << checkBit(a,i);


    return 0;
}

