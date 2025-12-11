/*     A
       A B           Draw this pattern
       A B C
       A B C D 
       A B C D E                 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
        
    }
return 0;
}