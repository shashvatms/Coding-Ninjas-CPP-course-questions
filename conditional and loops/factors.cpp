Problem
Result
Factors
Send Feedback
Write a program that takes a number as input and prints all its factors except 1 and the number itself.. If the number has only two factors (1 and the number itself), then the program should print -1.
Input Format :
A single integer, n

Output Format :
All the factors of n excluding 1 and the number itself

Constraints :
0 <= n <= 10,000

Sample Input 1 :
8

Sample Output 1 :
2 4

Explanation of Sample Output 1 :
The factors for the number excluding 1 and itself are 2 and 4, so the output is 2 4.

Sample Input 2 :
11

Sample Output 2 :
-1

Explanation of Sample Output 2 :
11 is a prime number having factors 1 and 11 so that output will be -1.


solution :
#include<iostream>
using namespace std;

int main() {
    int n,i,count=0;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            count = count+1;
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }
    if(count==0){
        cout<<-1;
    }
    
}


