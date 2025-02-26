#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> result;
        while(result.find(n)==result.end())
        {
            result.insert(n);
            int temp=n,sum=0;
            while(temp)
            {
                sum+=(temp%10)*(temp%10);
                temp/=10;
            }
            n=sum;
            if(n==1)
                return true;
        }
        return false;
    }
};