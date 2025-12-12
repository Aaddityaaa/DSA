/*   Problem number -> 136 on leetcode
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.    */

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> vec){
    int ans = 0;
    for(int val: vec){
        ans = ans ^ val;
    }
    return ans;
} 
int main(){
    vector<int> vec = {4,1,2,1,2};
    int res = singleNumber(vec);
    cout<<"Unique number is : "<<res;
return 0;
}