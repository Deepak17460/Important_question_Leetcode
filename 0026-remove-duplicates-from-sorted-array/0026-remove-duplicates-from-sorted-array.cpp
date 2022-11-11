class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int id=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                cout<<id<<endl;
                nums[id++]=nums[i];
                cout<<id<<endl;
            }
        }
        for(int i:nums) cout<<i<<" ";
        return id;
        
    }
};