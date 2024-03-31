/*Task 2: Checking for Palindrome
Extend your queue operations to include a function that checks if a given string is a
palindrome. A string is a palindrome if it reads the same backward as forward.
● Sample Input:
Check if "radar" is a palindrome.
● Sample Output:
Is palindrome: Yes
*/
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string& str)
{
    queue<char> charQueue;

    for (char c : str)
    {
        charQueue.push(c);
    }


    string reversedStr;
    while (!charQueue.empty())
    {
        reversedStr += charQueue.front();
        charQueue.pop();
    }

    return str == reversedStr;
}

int main()
{
    string input = "radar";

    if (isPalindrome(input))
    {
        cout << "Is palindrome: Yes" <<endl;
    }
    else
    {
        cout << "Is palindrome: No" <<endl;
    }

    return 0;
}

