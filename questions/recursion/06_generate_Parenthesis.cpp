#include<iostream>
#include<vector>
using namespace std;

void helper(int n, int open, int close, string curr, vector<string>& res){
    // Base condition
    if(close == n){
        res.push_back(curr);
        return;
    }

    // Pick opening parenthesis
    if(open < n)
        helper(n, open+1, close, curr + '(', res);

    // Pick opening parenthesis
    if(open > close)
        helper(n, open, close+1, curr + ')', res);
}

vector<string> generateParenthesis(int n){
    vector<string> res;
    helper(n, 0, 0, "", res);
    return res;
}

int main(){
    
    vector<string> res = generateParenthesis(3);
    for(string s : res){
        cout<<s<<" ";
    }
}