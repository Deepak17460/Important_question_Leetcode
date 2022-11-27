#define pd push_back
#define ll long long
class Solution {
   
public:
    int countSubarrays(vector<int>& nums, int k) {
         ll res = 0;
        ll n = nums.size();
        for(int i=0;i<n;i++)
        {
             if(nums[i] == k) nums[i] = 1e5;
             else if(nums[i] > k) nums[i] = -1;
             else nums[i] = 1;
        }
        
        unordered_map<ll,ll> mp;
        k = 1e5;
        ll sum =0;
        for(int i:nums){
            sum+=i;
            
            if(sum==k) res++;
            if(mp.find(sum - k)!= mp.end()) 
            {
                res+= mp[sum - k];
            }
            
            if(sum == k-1) res++;
            if(mp.find(sum - (k-1))!= mp.end())
            {
                res+= mp[sum - (k-1)];
            }
            
            mp[sum]++;
        }
        
        return res;
    }
};