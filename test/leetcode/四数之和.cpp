#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> four;
        int len=nums.size();
        for(int k=0;k<len-2;k++)
        {
            //剪枝
            if(nums[k]>target && nums[k]>0 && target>0) break;
            //去重
            if(k>0 && nums[k]==nums[k-1]) continue;
            for(int i=k+1;i<len-2;i++)
            {
                //剪枝
                if(nums[i]+nums[k]>target && nums[i]+nums[k]>0 && target>0) break;
                //去重
                if(i>k+1 && nums[i]==nums[i-1]) continue;
                int left=i+1,right=len-1;
                while(left<right)
                {
                    if((long)nums[i]+nums[left]+nums[right]+nums[k]>target)
                    {
                        right--;
                    }
                    else if((long)nums[i]+nums[left]+nums[right]+nums[k]<target)
                    {
                        left++;
                    }
                    else
                    {
                        four.push_back({nums[k],nums[i],nums[left],nums[right]});
                        while (right > left && nums[right] == nums[right - 1]) right--;
                        while (right > left && nums[left] == nums[left + 1]) left++;
                        right--;
                        left++;
                    }
                }
            }
        }
        return four;
    }
};