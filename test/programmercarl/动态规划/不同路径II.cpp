#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int obstacleLong=obstacleGrid[0].size(),loyer=obstacleGrid.size(),j=0;
        vector<int> dp(obstacleLong);
        dp[0]=1;
        for(int i=0;i<obstacleLong;i++){
            if(loyer==j){
                break;
            }
             if(obstacleGrid[j][i]==1){
                dp[i]=0;
                cout<<dp[i];
                continue;
            }
            if(i==0){
                dp[i]=1;
                cout<<dp[i];
                continue;
            }
            dp[i]=dp[i-1]+dp[i];
            cout<<dp[i];
            if(i==obstacleLong-1){
                cout<<endl;
                j++;
                i=-1;
                continue;
            }
        }
        cout<<endl;
        return dp[obstacleLong-1];
    }
};
int main(){
    Solution s;
    vector<vector<int>> obstacleGrid={{0,0,0},{1,1,0},{0,0,0}};
    cout<<s.uniquePathsWithObstacles(obstacleGrid)<<endl;
    return 0;
}