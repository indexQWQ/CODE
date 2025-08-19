#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int count=0;
    void travel(int index,int n){
        if(index>n){
            return;
        }
        if(index==n){
            count++;
            return;
        }
        travel(index+1,n);
        travel(index+2,n);
    }
    int climbStairs(int n) {
        count=0;
        travel(0,n);
        return count;
    }
};

int main(){
    Solution s;
    cout<<s.climbStairs(2)<<endl;
    cout<<s.climbStairs(3)<<endl;
    return 0;
}