// If a array is given then find the sum of all its subarray

#include<iostream>
#include<vector>
using namespace std;

 
int main(){
    int n = 5;
    int count=0;
    int arr[] = {1,2,3,4,5};
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }cout<<" ";
            count++;
        }cout<<"\n";
    }
    cout<<"Total subarray = "<<count;
return 0;
}