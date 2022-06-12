#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Test_case;
    //scanf("%d", &Test_case);
    cin >> Test_case;
    while (Test_case--)
    {
        int A_card;
        //scanf("%d", A_card);
        cin >> A_card;
        int arr[A_card];
        for (int i = 0; i < A_card; i++)
        {
            int num;
            //scanf("%d", &num);
            cin >> num;
            arr[i] = num;
        }
        for (auto it : arr)
        {
            cout << it << "\n";
        }
    }

    return 0;
}
