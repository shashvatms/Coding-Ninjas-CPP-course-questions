
  Minimum Length Word
Moderate
Score
0/160
Average time to solve is 40m
Problem statement
Send feedback

Given a string S (that can contain multiple words), you need to find the word which has minimum length.

Note : If multiple words are of same length, then answer will be first minimum length word in the string. Words are seperated by single space only.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :

1 <= Length of String S <= 10^5

Sample Input 1 :
this is test string

Sample Output 1 :
is

Sample Input 2 :
abc de ghihjk a uvw h j

Sample Output 2 :
a


#include<iostream>
#include "solution.h"
using namespace std;
#include<cstring>
#include<climits>
void minLengthWord(char input[], char output[]){
    int minWordLength = INT_MAX;
    int startIndex = 0;
    int minStartIndex = 0;
    int currentIndex = 0;

    while (input[currentIndex] != '\0') {
        if (input[currentIndex] == ' ' || input[currentIndex] == '\0') {
            int currentWordLength = currentIndex - startIndex;
            if (currentWordLength < minWordLength) {
                minWordLength = currentWordLength;
                minStartIndex = startIndex;
            }
            startIndex = currentIndex + 1;
        }
        currentIndex++;
    }

    strncpy(output, input + minStartIndex, minWordLength);
    output[minWordLength] = '\0';
    

}



int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
  }
