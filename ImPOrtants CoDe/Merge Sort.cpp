#include <bits/stdc++.h>
using namespace std;

mt19937 rd(0);

void mergeSubarrays(vector <int> &vc, int L, int R)
{
    vector <int> tempArray;
    int M = (L + R)/2;
    int leftP = L, rightP = M + 1;
    while(leftP <= M && rightP <= R)
    {
        if(vc[leftP] <= vc[rightP])
        {
            tempArray.push_back(vc[leftP]);
            leftP++;
        }
        else
        {
            tempArray.push_back(vc[rightP]);
            rightP++;
        }
    }
    while(leftP <= M)
    {
        tempArray.push_back(vc[leftP]);
        leftP++;
    }
    while(rightP <= R)
    {
        tempArray.push_back(vc[rightP]);
        rightP++;
    }
    for(int i = L; i <= R; i++)
    {
        vc[i] = tempArray[i-L];
    }
}

void mergeSort(vector <int> &vc, int L, int R)
{
    if (L >= R) return;
    int M = (L + R)/2;
    mergeSort(vc, L, M);
    mergeSort(vc, M + 1, R);
    mergeSubarrays(vc,L,R);
}

int main()
{
    vector <int> vc;
    for(int i = 0; i < 10000000; i++)
    {
        vc.push_back(rd()%1000);
    }
    mergeSort(vc, 0, vc.size()-1);
    /*
    for(auto it : vc)
    {
        cout << it << "\n";
    }
    */
    return 0;
}
