//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    int mod=1e8;
    private:
    int Helper(int n,vector<int>&dp){
        if(n==0) return 1;
        if(n==1) return 1;
        // Memoization
        if(dp[n]!=-1) return dp[n];
        return dp[n]=(Helper(n-1,dp)%mod+Helper(n-2,dp)%mod)%mod;
    }
  public:
    int fillingBucket(int N) {
        vector<int>dp(N+1,-1);
        return Helper(N,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends