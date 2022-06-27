#include <bits/stdc++.h>
using namespace std;

void mergeSubarrays(vector <int> &numbers, int Left, int Right)
{
    vector <int> tempArray;
    int Mid = Left + (Right - Left) / 2;
    int leftPointer = Left, rightPointer = Mid + 1;

    while(leftPointer <= Mid && rightPointer <= Right)
    {
        if(numbers[leftPointer] <= numbers[rightPointer]) /// '>' Changing this logic....MergeSort will return array in Decreasing Order
        {
            tempArray.push_back(numbers[leftPointer]);
            leftPointer++;
        }
        else{
            tempArray.push_back(numbers[rightPointer]);
            rightPointer++;
        }
    }
    while(leftPointer <= Mid)
    {
        tempArray.push_back(numbers[leftPointer]);
        leftPointer++;
    }

    while(rightPointer <= Right)
    {
        tempArray.push_back(numbers[rightPointer]);
        rightPointer++;
    }

    for(int i = Left; i <= Right; i++)
    {
        numbers[i] = tempArray[i - Left];
    }
}

void mergeSort(vector <int> &numbers, int Left, int Right)
{
    if( Left >= Right ) return;
    int Mid = Left + (Right - Left)/2;
    mergeSort(numbers,Left,Mid);
    mergeSort(numbers, Mid + 1, Right);
    mergeSubarrays(numbers, Left, Right);
}

void bubble_sort(vector<int>&numbers)
{
    int sz = numbers.size();
    for(int i = 0; i < sz-1; i++)
    {
        for(int j = i+1; j < sz; j++)
        {
            if(numbers[i] > numbers[j])
                swap(numbers[i],numbers[j]);
        }
    }
}

void insertion_sort(vector <int> &numbers)
{
    int sz = numbers.size();
    int j, key;
    for(int i = 1; i < sz; i++)
    {
        key = numbers[i];
        j = i - 1;

        while(j >= 0 && numbers[j] > key)
        {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j+1] = key;
    }
}
int main()
{
    vector <int> numbers = { 5,1,6,2,10,3,9,5,8,7,-1,0 };

    //mergeSort(numbers,0,numbers.size()-1);
    //bubble_sort(numbers);
    insertion_sort(numbers);

    for(auto it : numbers)
    {
        cout << it << "\n";
    }
    return 0;
}
