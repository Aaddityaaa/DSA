 // Problem number => 852 on Leetcode


 //             Brute force approach

// #include<iostream>
// #include<vector>
// using namespace std;

// int peakIndex(vector<int> &arr){
//     for(int i=1; i<arr.size(); i++){
//         if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
    // vector<int> vec = {0,3,8,9,5,2};
    // int ans = peakIndex(vec);
    // cout<<ans;
// return 0;
// } 
            // Time complexity = O(n)

//            Binary Search Approach

#include<iostream>
#include<vector>
using namespace std;

int peakIndex(vector<int> &arr){
    int st=1, end=arr.size()-2;

    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }else if(arr[mid] > arr[mid-1]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> vec = {0,3,8,9,5,2};
    int ans = peakIndex(vec);
    cout<<"Peak Index : "<<ans;
return 0;
}