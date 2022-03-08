#include <bits/stdc++.h>
#include <list>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;

    list<long long int> mylist;
    int cursor = 0;

    while(q--)
    {
        int a;
        long long int b;
        cin >> a;

        if(a == 0)
        {
            cin >> b;
            mylist.push_front(b);
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
            list<long long int>::iterator itr = mylist.begin();
            advance(itr,cursor);
            mylist.erase(itr);
        }
    }
    for(auto it : mylist)
    {
        cout << it << endl;
    }
    return 0;

}
