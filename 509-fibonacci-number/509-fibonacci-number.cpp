class Solution {
    int Helper(vector<int>&dp,int n){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=Helper(dp,n-1)+Helper(dp,n-2);
    }
public:
    int fib(int n) {
        vector<int>dp(n+2);
     dp[0]=0;
     dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};