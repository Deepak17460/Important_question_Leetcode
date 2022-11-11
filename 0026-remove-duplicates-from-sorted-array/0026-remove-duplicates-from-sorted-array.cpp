class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int id=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[id]=nums[i];
                id++;
            }
        }
        for(int i:nums) cout<<i<<" ";
        return id;
        
    }
};