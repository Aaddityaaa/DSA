#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int binnum;
    cout<<"Enter a Binary number : ";
    cin>>binnum;
    // int ans = 0, pow = 1;
    // int rem;
    // while(binnum > 0){
    //     rem = binnum % 10;
    //     ans += (rem*pow);
    //     pow *= 2;
    //     binnum /= 10;
    // }
    int ans=0, p=0,rem;
    while(binnum > 0){
        rem = binnum % 10;
        ans += rem * pow(2,p);
        p++;
        binnum /= 10;
    }
    cout<<"Decimal number of given Binary number : "<<ans<<"\n";

return 0;
}