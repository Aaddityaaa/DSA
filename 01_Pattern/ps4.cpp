/*     1 2 3
       4 5 6        Draw this pattern
       7 8 9                 */

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
return 0;
}


