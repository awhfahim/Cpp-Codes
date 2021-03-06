#include <bits/stdc++.h>
#include <list>
#include <iterator>
#include <iostream>
using namespace std;

int cursor;

int main()
{
    int q;
    cin >> q;

    list<long long int> mylist;

    while(q--)
    {
        int a;

        long long int b;
        cin >> a;

        list<long long int>::iterator itr = mylist.begin();
        advance(itr,cursor);

        if(a == 0)
        {
            cin >> b;
            if(cursor == 0)
            {
                mylist.push_front (b);
            }
            else
            {
                --itr;
                mylist.insert (itr,b);
            }

        }
        else if(a == 1)
        {
            cin >> b;
            if(b>0)
            {
                cursor += b;
            }
            else if(b<0)
            {
                cursor += b;
            }
        }
        else
        {
            mylist.erase(itr);
        }
    }
    for(auto it : mylist)
    {
        cout << it << endl;
    }
    return 0;

}
