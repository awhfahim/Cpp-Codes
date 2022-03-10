#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int cursor;

int main()
{
	fastIO();

    int q;
    cin >> q;

    list<long long int> mylist;

    while (q--)
    {
        int a;

        long long int b;
        cin >> a;

        list<long long int>::iterator itr = mylist.begin();
        advance(itr, cursor);

        if (a == 0)
        {
            cin >> b;
            if (cursor == 0)
            {
                mylist.push_front(b);
            }
            else
            {
                mylist.insert(itr, b);
            }

        }
        else if (a == 1)
        {
            cin >> b;
            if (b > 0)
            {
                cursor += b;
            }
            else if (b < 0)
            {
                cursor += b;
            }
        }
        else
        {
            mylist.erase(itr);
        }
    }
    for (auto it : mylist)
    {
        cout << it << endl;
    }
    return 0;
}
