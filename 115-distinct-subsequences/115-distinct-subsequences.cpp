class Solution {
    int Helper(string&s,string&t,int i,int j, vector<vector<int>>&dp){
        // Base Case
        if(j<0) return 1;
        if(i<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            return dp[i][j]=Helper(s,t,i-1,j-1,dp)+Helper(s,t,i-1,j,dp);
        }
        else
        {
            return dp[i][j]=Helper(s,t,i-1,j,dp);
        }
    }
public:
    int numDistinct(string s, string t) {
        // Length of 1st String
        int n=s.size();
        // Length of 2nd String
        int m=t.size();
        // Memoization
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return Helper(s,t,n-1,m-1,dp);
    }
};