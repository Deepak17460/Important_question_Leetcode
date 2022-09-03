class Solution {
    void AllPossiblePer(vector<vector<int>>&ans,vector<int>&Subsets,int *freq,vector<int>& nums){
        // base case
        if(Subsets.size()==nums.size()){
            ans.push_back(Subsets);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                Subsets.push_back(nums[i]);
                freq[i]=1;
                AllPossiblePer(ans,Subsets,freq,nums);
                // Backtracking
                // when Returing after overing the recursive call
                freq[i]=0;
                Subsets.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // size of the array
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>Subsets;
        // to Mark as Visited
        int freq[n];
        for(int i=0;i<n;i++) freq[i]=0;
       // vector<int>freq(n,0);
        AllPossiblePer(ans,Subsets,freq,nums);
        return ans;
    }
};