//   Return pair in sorted array with target sum 

                 // Brute force approach
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> vec,int target){
//     vector<int> ans;
//     for(int i=0; i<vec.size()-1; i++){
//         for(int j=i+1; j<vec.size(); j++){
//             if(vec[i] + vec[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
// }
// int main(){
//     vector<int> vec = {2,3,4,5};
//     vector<int> res = pairSum(vec, 9);
//     cout<<"Index : ";
//     cout<<"("<<res[0]<<","<<res[1]<<")";

// return 0;
// }
//             Time Complexity = O(n^2)


                    // Better approach 
// In this approach we take advantage of given sorted array 

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> vec,int target){
    vector<int> ans;
    int st=0, end=vec.size()-1;
    while(st< end){
        if(vec[st] + vec[end] == target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(vec[st] + vec[end] < target){
            st++;
        }
        else{
            end--;
        }
    }
}
int main(){
    vector<int> vec = {2,3,4,5};
    vector<int> res = pairSum(vec, 9);
    cout<<"Index : ";
    cout<<"("<<res[0]<<","<<res[1]<<")";

return 0;
}
          //Time complexity = O(n)