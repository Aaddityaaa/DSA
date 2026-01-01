// Problem no => 509 on Leetcode 

//  Ex =>   F(0) = 0, F(1) = 1
//          F(n) = F(n - 1) + F(n - 2), for n > 1


#include<iostream>
using namespace std;

int fib(int n){

    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int num;
    cout<<"Enter a num :";
    cin>>num;
    cout<<"Fibonacci of "<<num<<" is : "<<fib(num);
}