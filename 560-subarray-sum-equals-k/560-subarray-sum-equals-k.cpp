class Solution {
  
public:
    int subarraySum(vector<int>&nums, int k) {
        unordered_map<int,int>PreSum;
        int res =0;
        int CurrSum =0;
        for(int i =0;i<nums.size();i++){
            CurrSum+=nums[i];
            
            if(PreSum.find(CurrSum - k)!=PreSum.end())
                res+=PreSum[CurrSum-k];
            
            if(CurrSum == k) res++;
            PreSum[CurrSum]++;
        }
    return res;
    }
};