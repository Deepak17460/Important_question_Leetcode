class Solution {
    int Helper(vector<int>&dp,int n){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=Helper(dp,n-1)+Helper(dp,n-2);
    }
public:
    int fib(int n) {
        vector<int>dp(n+2);
     int prev=0;
     int prev1=1;
     int curren_i=0;
        for(int i=0;i<n;i++){
            curren_i=prev1+prev;
            prev=prev1;
            prev1=curren_i;
        }
        return prev;
    }
};