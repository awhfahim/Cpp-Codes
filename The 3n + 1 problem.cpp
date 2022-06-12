#include <bits/stdc++.h>
using namespace std;

vector <int> nums;
void recurr(long long n)
{
    nums.push_back(n);
    if(n == 1) return;
    if(n % 2 != 0)
    {
        recurr((1ll * 3*n) + 1);
    }
    else recurr(n/2);
}

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int k, m;
    for(int i = num1; i <= num2; i++)
    {
        recurr(i);
        k = nums.size();
        m = max(m,k);
        nums.clear();
    }
    cout << num1 << " " << num2 << " " << m << "\n";
    return 0;
}
