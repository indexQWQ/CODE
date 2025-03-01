#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int temp=x,sum=0;
        while(temp)
        {
            sum=sum*10+temp%10;
            temp/=10;
        }
        if(sum==x)return true;
        return false;
    }
};