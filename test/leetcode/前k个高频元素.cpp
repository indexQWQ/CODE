#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        vector<int> result,temp;
        for(int i:nums)
            um[i]++;
        for(auto i:um)
            temp.push_back(i.second);
        sort(temp.begin(),temp.end());
        for(int i=temp.size()-k;i<(int)temp.size();i++) 
        {
            for(auto j:um)
            {   
                if(j.second==temp[i])
                {
                    result.push_back(j.first);
                    nums[j.first]=0;
                }
            } 
        }   
        return result;
    }
};

int main()
{
    vector<int> nums,num;
    int k=2;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    Solution p;
    num=p.topKFrequent(nums,k);
    for(int i:num)cout<<i<<" ";
    return 0;
}