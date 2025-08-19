#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        for(int i=0;i<n-1;i++){
            dp[i+2]=dp[i]+dp[i+1];
        }
        return dp[n];
    }
};

int main(){
    Solution s;
    cout<<s.fib(2)<<endl;
    cout<<s.fib(3)<<endl;
    cout<<s.fib(4)<<endl;
    cout<<s.fib(0)<<endl;
    return 0;
}