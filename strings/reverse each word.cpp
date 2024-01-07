 Reverse Each Word
Easy
Score
60/80
Average time to solve is 20m
Problem statement
Send feedback

Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.

Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
Welcome to Coding Ninjas

Sample Output 1:
emocleW ot gnidoC sajniN

Sample Input 2:
Always indent your code

Sample Output 2:
syawlA tnedni ruoy edoc

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    string line;
    getline(cin,line);
    string word = "";
    for(int i=0;i<line.size();i++){
        if(line[i] == ' '){
            reverse(word.begin(), word.end());
            cout<<word<<" ";
            word="";
        }
        else{
            word.push_back(line[i]);
        }
    }
    if(word!=""){
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
}
