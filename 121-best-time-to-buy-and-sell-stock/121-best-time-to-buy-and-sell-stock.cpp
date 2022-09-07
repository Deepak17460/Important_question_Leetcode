class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int minV=INT_MAX;
          int ans=INT_MIN;
       for(int i:prices){
          minV=min(minV,i);
          ans=max(ans,i-minV);
     }
        return ans;
    }
};