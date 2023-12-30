Problem
Result
What is the output
Send Feedback
What will be the output of the following code ?
#include <iostream>
using namespace std;

void func(int a) {
    int b = 10;
    a = b + 10;
    cout << a << " ";
}

int main() {
    int a = 10;
    func(a);
    cout << a << " ";
}
 info
You have max 2 attempts to score in this question.
Attempts left:
1/2
Options
This problem has only one correct answer
20 20
20 10
10 20
20 30
check_circle
Hurray! Correct Answer
Solution Description
The main function calls the "func" function with the value of "a" as an argument.


Inside the "func" function, the value of "a" is changed and printed, but this change does not affect the value of "a" in the main function.


Finally, the value of "a" in the main function is printed.

SUBMIT 
