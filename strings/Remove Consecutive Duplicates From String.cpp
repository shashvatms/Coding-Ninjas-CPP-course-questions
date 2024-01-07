 Remove Consecutive Duplicates From String
Score
160/160
Problem statement
Send feedback

You are given a string 'STR' consisting of lower and upper case characters. You need to remove the consecutive duplicates characters, and return the new string.

Example :
For a given string, "aaaAAbbcccbd"

The new string formed after removing the consecutive duplicates characters will be, "aAbcbd".

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= |S| <= 10^5

Where |S| represents the length of the string.

Time limit: 1 sec

Sample Input 1 :
aabccba

Sample Output 1 :
abcba

Explanation of Sample Output 1 :
The string basically is a concatenation of [aa][b][cc][b][a] without considering the brackets. From each segment we need to choose only 1 character as all the characters are duplicates, therefore the final answer is [a][b][c][b][a] = abcba

Sample Input 2 :
xxxyyyzwwzzz

Sample Output 2 :
xyzwz

Explanation of Sample Output 2 :
The string basically is a concatenation of [xxx][yyy][z][ww][zzz]. After choosing 1 character from each segment our final answer is [x][y][z][w][z] = xyzwz


string removeConsecutiveDuplicates(string str) 
{
    string result = "";

    for (int i = 0; i < str.length(); i++) {
        // Add the current character to the result string if it's the first occurrence
        result += str[i];

        // Skip all consecutive duplicate characters
        while (i + 1 < str.length() && str[i] == str[i + 1]) {
            i++;
        }
    }

    return result;
}
#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    
    string s;
    cin >> s;
    s = removeConsecutiveDuplicates(s);
    cout << s;
}
