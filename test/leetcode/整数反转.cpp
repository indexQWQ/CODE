#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    int reverse(int x) {
        int flag=0;
        if(x<0){
            x=-x;
            flag=1;
        }
        int result=0;
        while(x){
            if((result >214748364 || result==214748364 && x%10>7)&& flag==0){
                return 0;
            }
            if((result >214748364 || result==214748364 && x%10>8)&& flag==1){
                return 0;
            }
            result=result*10+x%10;
            x/=10;
        }
        if(flag)return -result;
        return result;
    }
};