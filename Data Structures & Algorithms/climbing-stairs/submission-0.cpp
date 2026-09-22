class Solution {
private:
    int solve(int i,int n,vector<int>& dp)
    {
        if(n<0)
        return 0;
        if(n==0)
        return 1;
        if(dp[i]!=-1)
        return dp[i];
        int step1=solve(i+1,n-1,dp);
        int step2=solve(i+2,n-2,dp);
        return dp[i]=step1+step2;
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
       return solve(0,n,dp); 
    }
};
