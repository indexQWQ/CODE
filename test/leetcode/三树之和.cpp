#include <iostream>
#include <vector>
#include <unordered_set>
#include <functional>
using namespace std;

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int len=nums.size();
//         unordered_set<int> num(nums.begin(),nums.end());
//         vector<vector<int>> result;
//         int index=0;
//         for(int i=0;i<len;i++)
//         {
//             for(int j=0;j<len;j++)
//             {
//                 int sum=nums[i]+nums[j];
//                 if(num.find(0-sum)!=num.end())
//                 {
//                     for(int z=0;z<len;z++)
//                     {
//                         if(0-sum==nums[z] && i!=j && i!=z && j!=z)
//                         {
//                             vector<int> temp;
//                             result.push_back({nums[i],nums[j],0-sum});
//                         }
//                     }
                    
//                 }
//             }
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int len=nums.size();
        for(int i=0;i<len-2;i++)
        {
            if(nums[i]>0)return result;
            int left=i+1,right=len-1;
            while(left<right)
            {
                if(nums[i]+nums[left]+nums[right]>0)
                {
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0)
                {
                    left++;
                }
                else
                {
                    result.push_back({nums[i],nums[left],nums[right]});
                    while (right > left && nums[right] == nums[right - 1]) right--;
                    while (right > left && nums[left] == nums[left + 1]) left++;
                }
            }
        }
        return result;
    }
};