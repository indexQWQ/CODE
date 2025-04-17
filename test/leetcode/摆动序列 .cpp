#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<=2)return 1;
        vector<int>num;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-num[i]!=0)
            num.push_back(nums[i+1]-nums[i]);
        }
        for(int i=0;i<num.size()-2;i++){
            if(num[i]>0 && num[i+1]>0 && num[i+2]>0 || num[i]<0 && num[i+1]<0 && num[i+2]<0){
                num.erase(num.begin()+i+1);
                i--;
            }
        }
        return num.size()+1;
    }
};