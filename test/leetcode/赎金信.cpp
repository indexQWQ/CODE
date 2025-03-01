#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mg,mn;
        for(char i:magazine)
        {
            mg[i]++;
        }
        for(char i:ransomNote)
        {
            mn[i]++;
        }
        for(auto i:mn)
        {
            if(mg.find(i.first)==mg.end() || mg[i.first]<i.second)
            {
                return false;
            }
        }
        return true;
    }
};