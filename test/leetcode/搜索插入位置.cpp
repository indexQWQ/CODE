#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mideum=left+(right-left)/2;
            if(nums[mideum]>target){
                right=mideum-1;
            }
            else if(nums[mideum]<target){
                left=mideum+1;
            }
            else{
                return mideum;
            }
        }
        return left;
    }
};