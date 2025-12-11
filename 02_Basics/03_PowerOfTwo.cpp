// How to find out a number is power of two 
#include <iostream>
using namespace std;

int isPowerOfTwo(int n){
    if(n <= 0){
        return 0;
    }
    while(n % 2 == 0){
        n = n/2;
    }
    return n;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isPowerOfTwo(num) == 1){
        cout<<"Yes, it is power of two";
    }
    else{
        cout<<"No, it is not power of two";
    }
}