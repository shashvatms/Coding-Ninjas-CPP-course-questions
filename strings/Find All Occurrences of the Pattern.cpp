 Find All Occurrences of the Pattern
Easy
Score
60/80
Average time to solve is 20m
Problem statement
Send feedback

Given a string ‘str’ and a pattern ‘pat’, you have to find all occurrences of the pattern in the string. You have to print the starting positions of all occurrences of the pattern in the string.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1<str.size()<500
1<=pat.size()<=str.size

Sample Input 1:
‘str’ = “heyhihey”
‘pat’ = “hey”

Sample Output 1:
0 5

Explanation:
The pattern has a length of 3. We check each substring of the original string, starting from index 'i', to see if the first three characters match the pattern. If they do, 'i' is considered a valid index.

In the string "heyhihey":

At index 0, the substring "hey" matches the pattern, so 0 is a valid index.

At index 1, the substring "eyh" does not match the pattern, so 1 is not a valid index.

At index 2, the substring "yhi" does not match the pattern, so 2 is not a valid index.

At index 5, the substring "hey" matches the pattern, so 5 is a valid index.

Thus, the valid indices are 0 and 5.


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str,pat;
    cin>>str;
    cin>>pat;
    for(int i=0;i<str.size();i++){
        for(int j=i;j<str.size();j++){
            int index = i;
            int length = j-i+1;
            string check = str.substr(index,length);
            if(pat==check){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}
