#include <bits/stdc++.h>
using namespace std;

double Find_root(double a)
{
    double L = 0, R = max(1.00, a), M;
    while(fabs(L-R)>1e-6)
    {
        M = L + (R-L)/2.0;
        if(M*M > a)
        {
            R = M;
        }
        else
        {
            L = M;
        }
    }
    return L;
}

int main()
{
    double n = 0.5;
     cout << setprecision(6) << fixed << Find_root(n) << endl;
}
