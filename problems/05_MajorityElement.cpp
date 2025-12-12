/*     Problem number -> 169 on Leetcode
Given an array nums of size n, return the majority element. 
The majority element is the element that appears more than 
[n/2] times. You may assume that the majority element always exists in the array.  */

                 // Brute Force approach
// #include<iostream>
// #include<vector>
// using namespace std;

// int majorityElement(vector<int>vec){
//     for(int i=0; i<vec.size(); i++){
//         int count=1;
//         for(int j=i+1; j<vec.size(); j++){
//             if(vec[i] == vec[j]){
//                 count++;
//             }
//         }
//         if(count > vec.size()/2){
//             return vec[i];
//         }
//     }
// }
// int main(){
//     vector<int> vec = {2,2,1,1,1};
//     int res = majorityElement(vec);
//     cout<<"Majority element = "<<res;
// return 0;
// }
        //  Time complexity = O(n^2)

                   
        // Moore's voting algorithm
#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>vec){
    int freq=0, ans=0;
    for(int i=0; i<vec.size(); i++){
        if(freq == 0){
            ans = vec[i];
        }
        if(ans == vec[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> vec = {2,2,1,1,1,2,2};
    int res = majorityElement(vec);
    cout<<"Majority element = "<<res;
return 0;
}    
         // time complexity -> O(n)
//proper dry run it on paper to understand 

