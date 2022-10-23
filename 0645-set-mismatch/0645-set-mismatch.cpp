class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // Find the length of Nums
        vector<int>res;
        vector<int>arr;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
            //arr.push_back(i);
            
        }
        for(int i:nums){
            if(mp[i]==2){
            res.push_back(i);
                break;
            }
            
        }
        // set
       // unordered_set<int>st;
        for(auto i:mp){
            arr.push_back(i.first);
        }
        // Brtue force
        //vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
       // return arr;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans=ans^arr[i];
        }
        //cout<<ans;
        res.push_back(ans);
        return res;
    }
};