#define pd push_back

class Solution {
   
public:
    int countSubarrays(vector<int>& nums, int k) {
       int id = 0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == k ) {
                id = i;
                break;
            }
        }
        
        vector<int>left , right;
        left.pd(0);
        right.pd(0);
        
        int ct = 0;
        for(int i = id-1; i>=0; i--){
            if(nums[i] < k) ct++;
            else ct--;
            
            left.pd(ct);
        }
        for(int i:left) cout<<i<<" ";
        ct = 0;
        for(int i = id+1; i<n; i++){
            if(nums[i] > k) ct++;
            else ct--;
            
            right.pd(ct);
        }
        cout<<endl;
        for(int i:right) cout<<i<<" ";
        
        sort(left.begin() , left.end());
        sort(right.begin() , right.end());

        int ans  = 0;
        for(int i : right){
             vector<int>::iterator lower,upper;
            lower = lower_bound(left.begin(), left.end() , i);
            upper = upper_bound(left.begin(), left.end() , i);            
            ans += upper - lower;
            
            
            lower = lower_bound(left.begin(), left.end() , i-1);
            upper = upper_bound(left.begin(), left.end() , i-1);            
            ans += upper - lower;
        }
        return ans; 
    }
};