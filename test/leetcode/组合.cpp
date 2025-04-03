#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    vector<int>path;
    void stackbacking(int n,int k,int count){
        if(path.size()==k){
            result.push_back(path);
            return ;
        }
        for(int i=count;i<=n-(k-path.size())+1;i++){
            path.push_back(i);
            stackbacking(n,k,i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        stackbacking(n,k,1);
        return result;
    }
};
int main(){

    return 0;
}