#include <bits/stdc++.h>
using namespace std;

string str_reverse(string s, int L, int R)  /// TC -> O(N)
{
    if( L < R )
    {
        swap(s[L], s[R]);
        str_reverse(s, L+1, R-1);
    }
    return s;
}

bool isPalindrome(string str)
{
    string s = str_reverse(str, 0, str.length() - 1);
    if( s == str)
        return 1;
    else
        return 0;
}

long long get_factorial(int num)  /// TC -> O(N)
{
    if(num == 0) return 1;
    return num * get_factorial(num - 1);
}

bool find_subsequence(string& s, string& s1, int L = 0, int R = 0)  /// TC -> O(N)
{
    if (R == s1.length()) return true;
    if (L < s.length())
    {
        if (s[L] == s1[R])
        {
            find_subsequence(s, s1, L + 1, R + 1);
        }
        else
            find_subsequence(s, s1, L + 1, 0);

    }
}

void print_num(int N)  /// TC -> O(N)
{
    if( N == 0 ) return;
    print_num(N-1);
    cout << N << "\n";
}

int cnt = 0;
int find_div(int N, int num = 1)  /// TC -> sqrt(N)
{
    if(num * num <= N)
    {
        if( N % num == 0)
        {
            if(N / num == num)
            {
                cnt += 1;
            }
            else
                cnt +=2;
        }

        find_div(N, num + 1);
    }
}

int main()
{

    ///program to reverse a string with recursion
    string str = "fahim";
    cout << "REVERSE of this String is : " << str_reverse(str, 0, str.length() - 1) << "\n";

    ///detect whether a string is a palindrome or not
    cout << isPalindrome(str) << "\n";

    /// program to find the n-th factorial of an integer (0 <= n <= 20) with recursion
    cout << "Enter a Number : " ;
    int num;  cin >> num; cout << get_factorial(num) << "\n";

    ///Given two strings A and B, write a program to find if A is a subsequence of B with recursion
    string s = "fahimliughb";
    string s1 = "himlo";

    cout << find_subsequence(s, s1);

    ///print from 1 to N with recursion
    print_num(20);

    /// count the total number of divisors of N with recursion
    find_div(25);
    cout << cnt;

    return 0;
}

