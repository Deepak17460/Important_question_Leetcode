class Solution {
public:
    bool checkIfPangram(string sentence) {
        //unordered_map<char,int>mp;
        unordered_set<int>st;
        for(char ch: sentence){
            st.insert(ch);
        }
       return st.size()==26;
    
    }
};