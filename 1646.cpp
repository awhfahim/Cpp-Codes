#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i<t; i++)
    {
        long long n;
        long long int s;
        cin >> n >> s;

        long long int n_square = pow(n,2);

        long long int d = s/n_square;
        cout << d << endl;
    }
}
