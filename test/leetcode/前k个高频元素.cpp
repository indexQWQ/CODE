#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <unordered_map>
using namespace std;

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> um;
//         vector<int> result,temp;
//         for(int i:nums)
//             um[i]++;
//         for(auto i:um)
//             temp.push_back(i.second);
//         sort(temp.begin(),temp.end());
//         for(int i=temp.size()-k;i<(int)temp.size();i++) 
//         {
//             for(auto j:um)
//             {   
//                 if(j.second==temp[i])
//                 {
//                     result.push_back(j.first);
//                     nums[j.first]=0;
//                 }
//             } 
//         }   
//         return result;
//     }
// };

class Solution {
public:
    // 小顶堆
    class mycomparison {
    public:
        bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) {
            return lhs.second > rhs.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 要统计元素出现频率
        unordered_map<int, int> map; // map<nums[i],对应出现的次数>
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }

        // 对频率排序
        // 定义一个小顶堆，大小为k
        priority_queue<pair<int, int>, vector<pair<int, int>>, mycomparison> pri_que;

        // 用固定大小为k的小顶堆，扫面所有频率的数值
        for (unordered_map<int, int>::iterator it = map.begin(); it != map.end(); it++) {
            pri_que.push(*it);
            if (pri_que.size() > k) { // 如果堆的大小大于了K，则队列弹出，保证堆的大小一直为k
                pri_que.pop();
            }
        }

        // 找出前K个高频元素，因为小顶堆先弹出的是最小的，所以倒序来输出到数组
        vector<int> result(k);
        for (int i = k - 1; i >= 0; i--) {
            result[i] = pri_que.top().first;
            pri_que.pop();
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