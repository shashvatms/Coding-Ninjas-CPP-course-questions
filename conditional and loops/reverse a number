
 Problem
Result
Reverse of a number
Send Feedback
Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.




Input format :
Integer N

Output format :
Corresponding reverse number

Constraints:
0 <= N < 10^8

Sample Input 1 :
1234

Sample Output 1 :
4321

Sample Input 2 :
1980

Sample Output 2 :
891

solution : 
#include<iostream>
using namespace std;

int main()
{
    int N, rev=0;
   // cout << "Enter the number which have to reverse: " << endl;
    cin >> N;
    while(N>0){
        rev=(rev*10) + N % 10;
        N = N / 10;
    }
    cout << rev << endl;
}


