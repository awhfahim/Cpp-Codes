#include <bits/stdc++.h>
using namespace std;

int main()
{

    string input_T,input_P;
    cin >> input_T >> input_P;
    int T_Len = input_T.size();
    int P_Len = input_P.size();

    for(int i = 0; i<T_Len - P_Len+1; i++)
    {
        int coutn = 0;
        int w = i;
        for(int j = 0; j<P_Len; j++)
        {
            if(input_T[w] != input_P[j])
            {
                break;
            }
            else ///if(input_T[w] == input_P[j])
            {
                coutn++;
                w++;
            }
        }
        if(coutn == P_Len)
        {
            cout << i << endl;
        }
        if(w>(T_Len-1))
        {
            break;
        }

    }
    return 0;
}
