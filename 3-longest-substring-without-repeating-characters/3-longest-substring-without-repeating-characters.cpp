class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int Freq[256]={0};
        int i=0;
        int j=0;
        int ans=0;
        int n=s.size();
        while(j<n){
            // count the frequency
            Freq[s[j]]++;
            // checking the condtion
            while(Freq[s[j]]>1){
                Freq[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};