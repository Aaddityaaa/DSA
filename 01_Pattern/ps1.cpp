/*     1 2 3 4
       1 2 3 4    Draw this pattern
       1 2 3 4
       1 2 3 4                    */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<j+1<<" ";
        }
        cout<<"\n";
    }
return 0;
}
