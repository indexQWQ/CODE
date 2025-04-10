#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> specimen={"","","abc","def",
        "ghi","jkl","mno","pqrs",
        "tuv","wxyz"};
    vector<string> result;
    string path;
    void stacktroking(string digit){
        if(digit.size()==0){
            result.push_back(path);
            return;
        }
        string sum=specimen[digit.front()-'0'];
        digit.erase(digit.begin());
        for(char i:sum){
            path.push_back(i);
            stacktroking(digit);
            path.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return result;
        stacktroking(digits);
        return result;
    }
};