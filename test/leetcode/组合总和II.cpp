#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int>path;
    bool flag;
    int targett;
    void backtraking(vector<int> candid,int sum,int index){
        if(result.size()==149)return;
        if(sum>targett)return;
        if(sum==targett){
            result.push_back(path);
            return ;
        }
        for(int i=index;i<candid.size();i++){
            if(i>index && candid[i]==candid[i-1])continue;
            int temp=candid[i];
            path.push_back(temp);
            backtraking(candid,sum+temp,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        if(candidates.size()==0)return result;
        targett=target;
        sort(candidates.begin(),candidates.end());
        backtraking(candidates,0,0);
        return result;
    }
};