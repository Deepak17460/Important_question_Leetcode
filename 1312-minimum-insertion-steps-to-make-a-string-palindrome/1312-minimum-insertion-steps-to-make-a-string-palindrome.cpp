class Solution {
     int LPSL(int ind1,int ind2,string &s,string&t ,vector<vector<int>>&dp){
	
	if(ind1<0||ind2<0){
		return 0;
	}
	if(dp[ind1][ind2]!=-1){
		return dp[ind1][ind2];
	}
	if(s[ind1]==t[ind2]){
		return dp[ind1][ind2]=1+LPSL(ind1-1,ind2-1,s,t,dp);
	}
	
	return dp[ind1][ind2]=max(LPSL(ind1-1,ind2,s,t,dp),LPSL(ind1,ind2-1,s,t,dp));
}
public:
    int minInsertions(string s) {
        
      // Calling to find the length of length of LPS
        string s1=s;
        reverse(s1.begin(),s1.end());
        int n=s.size();
        int m=s1.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int len=LPSL(n-1,m-1,s,s1,dp);
        // final result;
        return (n-len);
    }
};