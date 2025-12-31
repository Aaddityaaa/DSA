//   Problem number -> 238 on Leetcode
/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.*/

             // Brute force approach -> 1
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> productExceptSelf(vector<int> nums){
//     int productOfAll = 1;
//     vector<int> ans; 
//     for(int i : nums){
//         productOfAll *= i;
//     }
//     for(int i : nums){
//         int x = productOfAll/i;
//         ans.push_back(x);
//     }
//     return ans;
// }
// int main(){
//     vector<int> vec = {1,2,3,4};
//     vector<int> ans = productExceptSelf(vec);
//     for(int val : ans){
//         cout<<val<<",";
//     }
// return 0;
// }

// It is right but it take time complexity of O(2n) and it use divide approch but in question it says that time complexity should be O(n) and it should not use divide approach.

 
            // Brute force approach -> 2 
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> productExceptSelf(vector<int> nums){
//     vector<int> ans;
//     for(int i=0; i<nums.size(); i++){
//         int product = 1;
//         for(int j=0; j<nums.size(); j++){
//             if( i != j){
//                 product *= nums[j]; 
//             }
//         }
//         ans.push_back(product);
//     }
//     return ans;
// }
// int main(){
//     vector<int> vec = {1,2,3,4};
//     vector<int> ans = productExceptSelf(vec);
//     for(int i : ans){
//         cout<<i<<",";
//     }
// return 0;
// }

        // Time coplexity = O(n^2)  

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int> nums){
        int n = nums.size();
        vector<int>prefix(n, 1);
        vector<int>suffix(n, 1);
        vector<int>ans(n, 1);
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }
        for(int i=0; i<n; i++){
			ans[i] = prefix[i] * suffix[i];
        }
		return ans;
}

int main(){
    vector<int>vec = {1,2,3,4};
    vector<int>ans = productExceptSelf(vec);
	for(int i: ans){
		cout<<i<<" ";
	}
return 0;
}