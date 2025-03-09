#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
        {
            if(it!=nums.end() && *it==val)
            {
                nums.erase(it);
                it=nums.begin();
                it--;
            }
        }
        return nums.size();
    }
};