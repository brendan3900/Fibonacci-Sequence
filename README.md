# Fibonacci-Sequence
This program was created to find the nth number in the Fibonacci sequence by using two different methods.
---> the first solves the problem only through recursion while the second solves the problem through recursion and dynamic programming. 


Summary of Approach


 To begin this problem, a global variable was defined as an array of int values. This array takes part in the dynamic programming, keeping track of array elements that do not have a Fibonacci number calculated yet. 

 Next, a function called FibonacciR(int en) was created which returns an int value; this function uses only recursion to find the nth number in the Fibonacci sequence (nth position represented by en in this program). An if statement was used to check if the argument en is 0 or 1, and if so, en is returned. Else, the sum of the recursive calls FibonacciR(en-1) and FibonacciR(en-2) is returned. 

 Next, a function called FibonacciD(int en) was created which returns an int value; this function uses recursion and dynamic programming to find the enth number in the Fibonacci sequence. An if statement was used to check if the argument en is 0 or 1, and if so, en is returned. Else, another if statement was used to check if the enth position of the global array was an invalid Fibonacci number. If it was, the enth position of the global array was set to the sum of the recursive calls FibonacciD(en-1) and FibonacciD(en-2), and the enth position of the global array was returned. 
