#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<string>>result;
    vector<string>path;
    bool isreverse(string& s,int start,int end){
        for(int i=start,j=end;i<j;i++,j--){
            if(s[i]!=s[j])return false;
        }
        return true;
    }
    void backtracking(string &s,int index){
        if(index>=s.size()){
            result.push_back(path);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isreverse(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
            }
            else continue;
            backtracking(s,i+1);
            path.pop_back();
        }
    }
    vector<vector<string>> partition(string s) {
        if(s.size()==0)return result;
        backtracking(s,0);
        return result;
    }
};