 All substrings
Easy
Score
60/80
Average time to solve is 20m
Problem statement
Send feedback

For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas "cdng" is not as the characters taken are not contiguous

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^3
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abc

Sample Output 1:
a 
ab 
abc 
b 
bc 
c 

 Sample Input 2:
co

Sample Output 2:
c 
co 
o


#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    for(int i=0;i<input.size();i++){
        for(int j=i;j<input.size();j++){
            int index=i;
            int length = j-i+1 ;
            cout<<input.substr(index,length)<<endl;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
