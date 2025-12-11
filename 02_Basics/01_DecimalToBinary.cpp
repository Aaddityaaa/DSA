#include<iostream>
using namespace std;

int main(){
    int decnum;
    cout<<"Enter a Decimal number : ";
    cin>>decnum;
    // int ans = 0, pow = 1;
    // int rem;
    // while(decnum > 0){
    //     rem = decnum % 2;
    //     ans += (rem*pow);
    //     pow *= 10; 
    //     decnum /= 2;
    // }
    // cout<<"Binary number of given Decimal number : "<<ans<<"\n";
    int ans = 0, digit, pow =1;
    while(decnum > 0){
        digit = decnum % 2;
        ans += (digit*pow);
        pow *= 10;
        decnum /= 2;
    }
    cout<<ans;
return 0;
}