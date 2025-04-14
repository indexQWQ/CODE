#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<char> path;
    bool isvalid(int& row,int& col,char &k,vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            if(board[i][col]==k && i!=row){
                return false;
            }
        }
        for(int j=0;j<board[0].size();j++){
            if(board[row][j]==k && j!=col){
                return false;
            }
        }
        int startcol=(col/3)*3;
        int startrow=(row/3)*3;
        for(int i=startrow;i<startrow+3;i++){
            for(int j=startcol;j<startcol+3;j++){
                if(board[i][j]==k && i!=row && j!=col){
                    return false;
                }
            }
        }
        return true;
    }
    bool backtracking(vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.')continue;
                for(char k='1';k<='9';k++){
                    if(isvalid(i,j,k,board)){
                        board[i][j]=k;
                        if(backtracking(board))return true;
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        backtracking(board);
    }
};