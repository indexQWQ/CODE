#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

//回溯超时
class Solution {
public:
    int result=1001;
    void trackbacking(vector<int>& nums,int scope,int count,int index){
        if(scope>=nums.size()-1){
            result=min(count,result);
            return;
        }
        for(int i=1;i<=nums[index];i++){
            trackbacking(nums,scope+i,count+1,index+i);
        }
    }
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        trackbacking(nums,0,0,0);
        return result;
    }
};

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int count=0,cur=0,next=0;
        for(int i=0;i<nums.size();i++){
            next=max(next,i+nums[i]);
            if(i==cur){
                count++;
                cur=next;
                if(next>=nums.size()-1)break;
            }
        }
        return count;
    }
    
};