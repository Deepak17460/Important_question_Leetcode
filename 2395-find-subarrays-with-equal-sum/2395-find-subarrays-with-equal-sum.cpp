class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int>ans;
        for(int i=1;i<nums.size();i++){
            int sum=nums[i]+nums[i-1];
            ans[sum]++;
            // checking the condition
            if(ans[sum]>1) return 1;
        }
        return 0;
    }
};