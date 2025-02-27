#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> ab;
        for(int i:nums1)
        {
            for(int j:nums2)
            {
                ab[i+j]++;
            }
        }
        int count=0;
        for(int i:nums3)
        {
            for(int j:nums4)
            {
                if(ab.find(0-(i+j))!=ab.end())
                {
                    count+=ab[0-(i+j)];
                }
            }
        }
        return count;
    }
};