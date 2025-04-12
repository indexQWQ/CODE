#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string>result;
    string path;
    bool isid(const string& s,int start,int end){
        if(end-start>2)return false;
        if(start <end && s[start]=='0')return false;
        int sum=0;
        for(int i=start;i<=end;i++){
            sum=sum*10+(s[i]-'0');
        }
        if(sum>=0 && sum<=255)return true;
        return false;
    }
    void backtracking(string &s,int index,int potsum){
        if(potsum==4){
            if(index==s.size()){
                path.pop_back();
                result.push_back(path);
                path+='.';
            }
            return ;
        }
        for(int i=index;i<s.size();i++){
            if(isid(s,index,i)){
               path+=s.substr(index,i-index+1);
               path+='.';
               backtracking(s,i+1,potsum+1);
               path.pop_back();
               path.erase(path.size()-(i-index+1));
            }else{
                break;
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if(s.size()==0)return result;
        backtracking(s,0,0);
        return result;
    }
};