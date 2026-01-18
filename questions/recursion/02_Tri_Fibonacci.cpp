// Problem no => 1137 on Leetcode 


#include<iostream>
using namespace std;

int fib(int n){

    if(n <= 2) return n;
    return fib(n-1) + fib(n-2) + fib(n-3);
}

int main(){
    int num;
    cout<<"Enter a num :";
    cin>>num;
    cout<<"Fibonacci of "<<num<<" is : "<<fib(num);
}

// Time Complexity = O(3^n)
// Space Complexity = O(n)