class Solution {
    void AllPossiblePer(vector<vector<int>>&ans,int ind,vector<int>& nums){
         int n=nums.size();
        // base case
        if(ind>=n){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<n;i++){
            swap(nums[i],nums[ind]);
            AllPossiblePer(ans,ind+1,nums);
            // backtracking
            swap(nums[i],nums[ind]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // size of the array
        int n=nums.size();
        vector<vector<int>>ans;
        //vector<int>Subsets;
        // to Mark as Visited
        int freq[n];
        //for(int i=0;i<n;i++) freq[i]=0;
       // vector<int>freq(n,0);
        AllPossiblePer(ans,0,nums);
        return ans;
    }
};