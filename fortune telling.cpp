#include <bits/stdc++.h>
using namespace std;

int result(vector <int> &petal)
{
    int sum = 0;
    int sum1 = 0;
    vector <int> OddPetals;
    for(auto it : petal)
    {
        if(it%2 == 0) sum += it;
        else
        {
            sum1 += it;
            OddPetals.push_back(it);
        }
    }
    int a = sum + sum1;
    if(a % 2 != 0) return a;
    sort(OddPetals.begin(), OddPetals.end());
    for(auto it : OddPetals)
    {
        int b = 0;
        b = a - it;
        if(b % 2 != 0) return b;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    vector <int> petals;
    for(int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        petals.push_back(num);
    }
    cout << result(petals);

    return 0;
}

