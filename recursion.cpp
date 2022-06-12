#include <bits/stdc++.h>

using namespace std;
int x = 1;

void func(int i)
{
    i = i * 5;
    x = x + 10;

    printf("i is : %d\n", i);
    printf("x is : %d\n", x);
}

int main()
{
    int i = 5;
    x = 1;

    func(i);
    cout << endl;
    cout << x;
    return 0;
}
