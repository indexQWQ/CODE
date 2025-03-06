#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <cstdlib>
using namespace std;

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         if(nums.size()<=k)
//         {
//             sort(nums.begin(),nums.end());
//             return vector<int>(nums.end()-1,nums.end());
//         }
//         vector<int> v;
//         v.resize(nums.size()-k+1);
//         for(int i=nums.size()-1;i>=k-1;i--)
//         {
//             int max=nums[i];
//             for(int j=i;j>i-k;j--)
//             {
//                 max=max>nums[j]?max:nums[j];
//             }
//             v.push_back(max);
//         }
//         reverse(v.begin(),v.end());
//         return v;
//     }
// };

class MyQueue {
public:
    deque<int> que;
    void pop(int value) {
        if(!que.empty() && value==que.front())
            que.pop_front();
    }
    void push(int value) {
        while(!que.empty() && value>que.back())
        {
            que.pop_back();
        }
        que.push_back(value);
    }
    int front() {
        return que.front();
    }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.size()<=k)
        {
            sort(nums.begin(),nums.end());
            return vector<int>(nums.end()-1,nums.end());
        }
        vector<int> v;
        MyQueue mq;
        for(int i=0;i<k;i++)
        {
            mq.push(nums[i]);
        }
        v.push_back(mq.front());
        for(int i=k;i<nums.size();i++)
        {
            mq.pop(nums[i-k]);
            mq.push(nums[i]);
            v.push_back(mq.front());
        }
        return v;
    }
};