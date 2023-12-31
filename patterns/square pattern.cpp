Problem
Result
Check Case
Send Feedback
Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.




1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.





Example:
Input: The character is 'a'.

Output: 0

Explanation: The input character is lowercase, so our answer is 0.

Input format :
The only line contains a single character.





Output format :
The only line contains 1, 0, or -1 according to the above rules.

Sample Input 1 :
v





Sample Output 1 :
0





Explanation of Sample Input 1:
The input character is lowercase, so our answer is 0.





Sample Input 2 :
V





Sample Output 2 :
1





Explanation of Sample Input 2:
The input character is uppercase, so our answer is 1.





Sample Input 3 :
#





Sample Output 3 :
-1





Explanation of Sample Input 3:
The input character is not an alphabet, so our answer is -1.





Constraints :
The input can be any single character.
 Problem
Result
Code : Square Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 50

Sample Input 1:
7

Sample Output 1:
7777777
7777777
7777777
7777777
7777777
7777777
7777777

Sample Input 1:
6

Sample Output 1:
666666
666666
666666
666666
666666
666666
solution:


#include<iostream>
using namespace std;


int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<n;
		}
		cout<<"\n";
	}
  
}
