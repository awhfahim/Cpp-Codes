#include <bits/stdc++.h>
using namespace std;

void calculateResult(vector <int> &alice, vector <int> &bob, int n, int m)
{
    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());

    int alice_last = alice[n-1];
    int bob_last = bob[m-1];
    if(alice_last > bob_last)
    {
        printf("Alice\n");
        printf("Alice\n");
    }
    else if (alice_last < bob_last)
    {
        printf("Bob\n");
        printf("Bob\n");
    }
    else
    {
        printf("Alice\n");
        printf("Bob\n");
    }
}

int main()
{
    int Test_case;
    scanf("%d", &Test_case);
    while(Test_case--)
    {
        int Alice_card, Bob_card;
        scanf("%d", &Alice_card);
        vector <int> cards[2];

        for(int i = 0; i < Alice_card; i++)
        {
            int num;
            scanf("%d", &num);
            cards[0].push_back(num);
        }
        scanf("%d", &Bob_card);
        for(int j = 0; j < Bob_card; j++)
        {
            int num2;
            scanf("%d", &num2);
            cards[1].push_back(num2);
        }

        calculateResult(cards[0],cards[1],Alice_card,Bob_card);

    }

    return 0;
}
