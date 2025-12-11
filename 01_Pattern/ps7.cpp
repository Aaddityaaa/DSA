/*     1 
       2 2           Draw this pattern
       3 3 3
       4 4 4 4  
       5 5 5 5 5                  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<i+1<<" ";
        }
        cout<<"\n";
    }
return 0;
}