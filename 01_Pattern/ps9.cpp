/*     A
       B B           Draw this pattern
       C C C
       D D D D 
       E E E E E                 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<"\n";
        ch++;
    }
return 0;
}