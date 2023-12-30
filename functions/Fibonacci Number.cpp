//  Problem
// Result
// Fibonacci Number
// Send Feedback
// Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
// Note:
// Fibonacci series is the series of numbers where each number is obtained by adding two previous numbers. The first two numbers in the Fibonacci series are 0 and 1.





// Input Format :
// Integer N

// Output Format :
// true or false

// Constraints :
// 0 <= n <= 10^4

// Sample Input 1 :
// 5

// Sample Output 1 :
// true

// Sample Input 2 :
// 14

// Sample Output 2 :
// false    

bool checkMember(int n){
    //  cin>>n;
      int a =0,b=1;
      int c=a+b;
      while(c<=n)
      {
      a=b;
      b=c;
      c=a+b;
      if(c==n)
      {
      return true;
      }

      }

      if(n==a||n==b)
      return true;
    

      else
      return false;



}
