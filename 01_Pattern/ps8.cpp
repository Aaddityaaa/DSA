/*     1 
       1 2           Draw this pattern
       1 2 3
       1 2 3 4  
       1 2 3 4 5                  */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
return 0;
}
