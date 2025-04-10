#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int>path;
    int targett;
    void backtraking(vector<int> candid,int sum,int index){
        if(result.size()==149)return;
        if(sum>targett)return;
        if(sum==targett){
            result.push_back(path);
            return ;
        }
        for(int i=index;i<candid.size();i++){
            if(candid[i]==0)continue;
            int temp=candid[i];
            path.push_back(candid[i]);
            //candid[i]=0;
            backtraking(candid,sum+temp,i);
            path.pop_back();
            //candid[i]=temp;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if(candidates.size()==0)return result;
        targett=target;
        backtraking(candidates,0,0);
        return result;
    }
};