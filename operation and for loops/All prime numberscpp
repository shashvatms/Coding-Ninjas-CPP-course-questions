Problem
Result
All Prime Numbers
Send Feedback
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N

Output Format :
Prime numbers in different lines

Constraints :
1 <= N <= 100

Sample Input 1:
9

Sample Output 1:
2
3
5
7

Sample Input 2:
20

Sample Output 2:
2
3
5
7
11
13
17
19

solution::

#include <iostream>
using namespace std;

int main(){
   
    int N, i, j, isPrime, n;
 
    cin >> N;
      
    for(i = 2; i <= N; i++){
        isPrime = 0;
        
        for(j = 2; j <= i/2; j++){
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }
        if(isPrime==0 && N!= 1)
            cout << i << endl;
    }
 
   return 0;
}
