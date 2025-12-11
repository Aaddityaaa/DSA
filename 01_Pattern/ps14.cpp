// Pyramid Pattern
/*        1
        1 2 1
      1 2 3 2 1                     Draw this pattern
    1 2 3 4 3 2 1                         */

#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the value : ";
    cin >> n;
    for(int i=0; i<n; i++){

        // print space for first triangle
        for(int j=n; j>i+1; j--){
            cout<<"  ";
        }
        // print first tringle
        for(int j=0; j<=i; j++){
            cout<<j+1<<" ";
        }
        //print second trinagle
        for(int j=0; j<i; j++){
            cout<<j+1<<" ";
        }
        // print space for second triangle
        for(int j=n; j>i; j--){
            cout<<"  ";
        }

        cout<<"\n";
    }
}