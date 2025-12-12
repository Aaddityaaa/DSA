/*      Problem number -> 53 on Leetcode
Given an integer array nums, find the subarray with the largest sum, and return its sum.                             */

                // Brute force technique
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int maxSum = INT_MIN;

//     int arr[] = {3,-4,5,4,-1,7,-8};
//     int n = sizeof(arr)/sizeof(int);

//     for(int st=0; st<n; st++){
//         int currSum = 0;
//         for(int end=st; end<n; end++){
//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }
//     cout<<"Maximum subarray sum = "<<maxSum;
// return 0;
// }
                // Time complexity = O(n^2)

                // Kdane's Algorithm
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxSubArray(vector<int> vec){
    int currSum=0,maxSum=INT_MIN;
    for(int val: vec){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}
int main(){
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    int res = maxSubArray(vec);
    cout<<"Maximum subarray sum : "<<res;
return 0;
}
//        Time complexity = O(n)