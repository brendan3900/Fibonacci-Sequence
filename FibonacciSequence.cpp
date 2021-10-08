//Brendan Li
#include <iostream>
using namespace std;

//global array for FibonacciD
int A[100];

//recursive only function
int FibonacciR(int en){
    //check if the enth place is 1 or 0, if so return it
    if(en==1||en==0){
        return(en);
    }
    else{//else, return recursive call
        //recursive call of the sum of the two numbers before
        return(FibonacciR(en-1)+FibonacciR(en-2));
    }
}

////dynamic programming  function
int FibonacciD(int en){
    //check if the enth place is 1 or 0, if so return it
    if(en==1||en==0){
        return en;
    }
    else{
        //check if the enth place is an invalid fibonacci sequence
        if(A[en]==-1){
            //set A[en] to prior two numbers' sum
            A[en]=(FibonacciD(en-1)+FibonacciD(en-2));
            return A[en];//return the enth value
        }
    }
}

//this is the main function to test this code
int main() {
    int n;//The user inputs this number to calculate its Fibonacci sequence
    cout<<"n=";
    cin>>n;

    //initialize all elements in array A to an invalid Fibonacci value
    for(int i=0; i<=n; i++){
        A[i]=-1;}

    //Find Fibonacci sequence n using the Dynamic programming function
    cout<<"FibonacciD(n)="<<FibonacciD(n);

    //Find Fibonacci sequence n using the recursive only function
    cout<<"\nFibonacciR(n)="<<FibonacciR(n);

    return 0;
}