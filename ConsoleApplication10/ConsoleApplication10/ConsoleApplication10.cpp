#include <bits/stdc++.h>
using namespace std;

int result(vector <int>& petal)
{
    int sum = 0;
    int sum1 = 0;
    vector <int> OddPetals;
    for (auto it : petal)
    {
        if (it % 2 == 0) sum += it;
        else
        {
            sum1 += it;
            OddPetals.push_back(it);
        }
    }

    return sum + sum1;
}

int main()
{
    int n;
    //scanf("%d", &n);
    cin >> n;
    vector <int> petals;
    for (int i = 0; i < n; i++)
    {
        int num;
        //scanf("%d", &num);
        cin >> num;
        petals.push_back(num);
    }
    cout << result(petals);

    return 0;
}
