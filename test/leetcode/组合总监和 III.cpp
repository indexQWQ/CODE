#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int>path;
    void stacktroking(int k,int n,int index){
        if(path.size()==k){
            int temp=0;
            for(int i=0;i<k;i++){
                temp+=path[i];
            }
            if(temp!=n)return;
            result.push_back(path);
            return;
        }
        for(int i=index;i<=9-(k-path.size())+1;i++){
            path.push_back(i);
            stacktroking(k,n,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        stacktroking(k,n,1);
        return result;
    }
};