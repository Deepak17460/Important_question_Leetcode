#define pd push_back

class Solution {
   
public:
    int countSubarrays(vector<int>& nums, int k) {
         int ans = 0;
        int f = 0;
        
        int n = nums.size();
    
        
        for(int i=0;i<n;i++)
        {
             if(nums[i] == k) nums[i] = 1e5;
             else if(nums[i] > k) nums[i] = -1;
             else nums[i] = 1;
        }
        
        unordered_map<int,int> mp;
        k = 1e5;
        int sum =0;
        for(auto i:nums){
            sum+=i;
            
            if(sum==k) ans++;
            if(mp.find(sum - k)!= mp.end()) 
            {
                ans+= mp[sum - k];
            }
            
            if(sum == k-1) ans++;
            if(mp.find(sum - (k-1))!= mp.end())
            {
                ans+= mp[sum - (k-1)];
            }
            
            mp[sum]++;
        }
        
        return ans;
    }
};