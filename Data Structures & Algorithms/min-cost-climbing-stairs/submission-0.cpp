class Solution {
private:
    int solve(int i,int n,vector<int>& cost,vector<int>& dp)
    {
        if(i>=n)
        return 0;

        if(dp[i]!=-1)
        return dp[i];

        int oneStep=solve(i+1,n,cost,dp);
        int twoStep=solve(i+2,n,cost,dp);

        return dp[i]=cost[i]+min(oneStep,twoStep);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
       int zero=solve(0,n,cost,dp);
       int one=solve(1,n,cost,dp);
       return min(zero,one); 
    }
};
