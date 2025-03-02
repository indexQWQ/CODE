#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> masterMind(string solution, string guess) {
        vector<int> result;
        unordered_map<char,int> answer;
        int good=0;
        for(int i=0;i<solution.size();i++)
        {
            if(solution[i]==guess[i])
                good++;
        }
        for(char ch:guess)
        {
            answer[ch]++;
        }
    }   
};