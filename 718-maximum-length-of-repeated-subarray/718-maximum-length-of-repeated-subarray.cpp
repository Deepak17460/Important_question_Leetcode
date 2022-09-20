class Solution {
    int fn(int ind1,int ind2,vector<int>&nums1,vector<int>&nums2,vector<vector<int>>&dp){
	
	if(ind1<0||ind2<0){
		return 0;
	}
	if(dp[ind1][ind2]!=-1){
		return dp[ind1][ind2];
	}
	if(nums1[ind1]==nums2[ind2]){
		return dp[ind1][ind2]=1+fn(ind1-1,ind2-1,nums1,nums2,dp);
	}
	
	return dp[ind1][ind2]=max(fn(ind1-1,ind2,nums1,nums2,dp),fn(ind1,ind2-1,nums1,nums2,dp));
}
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        //  int n=nums1.size();
        //  int m=nums2.size();
        //  vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        // return fn(n-1,m-1,nums1,nums2,dp);
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int ans = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                    if (nums1[i-1]==nums2[j-1]){
                        dp[i][j] = max(dp[i][j],1+dp[i-1][j-1]);
                    }
                    ans = max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};