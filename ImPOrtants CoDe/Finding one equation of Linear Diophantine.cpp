#include <bits/stdc++.h>
using namespace std;

int get_extended_euclid(int a, int b, int& x, int& y)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = get_extended_euclid(b, a%b, x1, y1);

    x = y1;
    y = x1 - (y1*(a/b));

    return gcd;
}

void print_solution(int a, int b, int c)
{
    int x,y;
    if(a == 0 && b == 0)
    {
        if(c == 0)
        {
            cout << "There are infinte Solution";
        }
        else cout << "Solution does not exists";
    }

    int gcd = get_extended_euclid(a,b,x,y);

    if(c % gcd == 0)
    {
        x *= (c/gcd);
        y *= (c/gcd);
        cout << x << " " << y;
    }
    else cout << "No Solution Exists";

}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    print_solution(a,b,c);
    return 0;
}
