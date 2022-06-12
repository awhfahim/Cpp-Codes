#include <bits/stdc++.h>
using namespace std;

int get_fact(int n)
{
    if(n==0) return 1;

    return n * get_fact(n-1);
}

int main()
{
    int n; scanf("%d", &n);
    cout << get_fact(n) << endl;
}
