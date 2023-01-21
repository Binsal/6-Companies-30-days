class Solution {
public:
    int climbStairs(int n) {
       // count=0;
        
        vector<int>dp(n+2,0);
        
        if(n<=1)return n;
        
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+1;
        }
        
        return dp[n]+1;
    }
};