class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(auto i:arr)
        {
            m[i]++;
        }
        vector<pair<int,int>>Freq;
        for(auto j:m)
        {
            Freq.push_back({j.second,j.first});
        }
        sort(Freq.begin(),Freq.end());
       
        int i=0;
        while(i<Freq.size())
        {
            if(Freq[i].first<=k)
            {
                k-=Freq[i].first;
            }
            else
            {
                break;
            }
            i++;
        }
        return Freq.size()-i;
    }
};