#define ll long long
class Solution {
    private:
    int Helper(vector<int>&nums){
       ll n=nums.size();
        if(n==1)   return 0;
      ll pre[n]; 
      pre[0]=nums[0];
	
    for(int i=1;i<n;i++) pre[i]=pre[i-1]+nums[i];
	
    ll ans=1e9;
    ll ind=0;
	
    for(int i=1;i<n;i++) {
        ll k=(abs(pre[i-1]/i-(pre[n-1]-pre[i-1])/(n-i)));
        if(ans>k){
            ans=min(ans,k);
            ind=i-1;
        }
    }
	
    if(ans>abs(pre[n-1]/n)){
        ans=abs(pre[n-1]/n);
        ind=n-1;
    }
    return ind;
    }
public:
    int minimumAverageDifference(vector<int>& nums) {
        return Helper(nums);
    }
};