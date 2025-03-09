#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> um;
        int count=0;
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
        {
            um[*it]++;
            if(um[*it]>1){
                vector<int>::iterator temp=it+1;
                nums.erase(it);
                it=temp-1;
                continue;
            }
            count++;
        }
        return count;
    }
};