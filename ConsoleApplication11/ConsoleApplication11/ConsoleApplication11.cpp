#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

void genSubset(vector <int>& arr, vector <int>& subset, int currPos)
 {
	if (currPos == arr.size())
	{
		for (auto it : subset)
		{
			cout << it << " ";
		}
		cout << "\n";
		return;
	}
	subset.push_back(arr[currPos]);
	genSubset(arr, subset, currPos + 1);
	subset.pop_back();

	genSubset(arr, subset, currPos + 1);
}

unordered_set<long long> magicNumbers;
void genMagicNumber(long long n = 1)
{
	if (n > 10) return;
	if (magicNumbers.count(n) > 0) return;
	magicNumbers.insert(n);
	genMagicNumber(n * 2);
	genMagicNumber(n * 3);
	genMagicNumber(n * 5);

}

int rec(int n)
{
    if(n == 100) return 100;
    return n + rec(n + 1);
}

int main()
{
    /*
	genMagicNumber();
	cout << magicNumbers.size();
	*/
    cout << rec(98);
    return 0;
	vector <int> subset;
	vector <int> arr = { 1, 2, 5, 11, 14};
	genSubset(arr, subset, 0);
	return 0;


}
