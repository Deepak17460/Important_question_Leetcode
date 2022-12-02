#define ll long long
#define pd push_back
class Solution {
    bool Helper(string &S1,string &S2){
        unordered_set<char>st1,st2;
        vector<ll>mp1(26,0),mp2(26,0);
        for(char c:S1){
            mp1[c-'a']++;
            st1.insert(c);
        }
        for(char c:S2){
            mp2[c-'a']++;
            st2.insert(c);
        }
       sort(begin(mp1),end(mp1));
       sort(begin(mp2),end(mp2));
        return mp1==mp2 && st1==st2;
    }
public:
    bool closeStrings(string word1, string word2) {
        return Helper(word1,word2);
    }
};