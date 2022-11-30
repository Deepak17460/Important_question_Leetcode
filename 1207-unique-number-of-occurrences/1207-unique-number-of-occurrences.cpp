#define ll long long

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<ll,ll>mp;
        for(int i:arr){
            mp[i]++;
        }
        unordered_set<ll>st;
        for(auto i:mp){
            st.insert(i.second);
        }
        return mp.size()==st.size();
    }
};