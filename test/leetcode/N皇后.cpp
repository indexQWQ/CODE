#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> result;
    bool isvild(vector<string>& path,int &n,int col,int row){
        for(int i=0;i<row;i++){
            if(path[i][col]=='Q')return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(path[i][j]=='Q')return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(path[i][j]=='Q')return false;
        }
        return true;
    }
    void backtracking(vector<string>& path,int& n,int row){
        if(n==row){
            result.push_back(path);
            return ;
        }
        for(int i=0;i<n;i++){
            if(isvild(path,n,i,row)){
                path[row][i]='Q';
                backtracking(path,n,row+1);
                path[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        if(!n)return result;
        vector<string> path(n,string(n,'.'));
        backtracking(path,n,0);
        return result;
    }
};