class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Using unordered_map
        
        unordered_map<string,vector<string>>mp;
        for(string str:strs){
            string S=str;
            // sorting
            sort(S.begin(),S.end());
            mp[S].push_back(str);
        }
        // to get the result
        vector<vector<string>>res;
        for(auto r:mp){
            res.push_back(r.second);
        }
        return res;
    }
};