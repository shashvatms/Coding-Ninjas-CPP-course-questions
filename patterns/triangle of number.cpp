Problem
Result
Code : Triangle of Numbers
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4




The dots represent spaces.





Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
           1
          232
         34543
        4567654
       567898765

Sample Input 2:
4

Sample Output 2:
           1
          232
         34543
        4567654
solution:::::


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i,j,spaces;
    for(i=1;i<=n;i++){
        int k =i;
     
        for(spaces=1;spaces<=n-i;spaces++){
            cout<<" ";

        }
        for(j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        k--;
        k--;
        for(j=1;j<i;j++){
           
            cout<<k;
            k--;
   
        }
        cout<<endl;

    }
    
}

