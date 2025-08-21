#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n));
        dp[0][0]=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0){
                    dp[i][j]=1;
                    continue;
                }
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

int main(){
    Solution s;
    cout<<s.uniquePaths(3,7)<<endl;
    cout<<s.uniquePaths(2,3)<<endl;
    cout<<s.uniquePaths(3,3)<<endl;

    return 0;
}