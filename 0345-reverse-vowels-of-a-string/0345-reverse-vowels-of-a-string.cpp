class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        int i=0,j=n-1;
        int dict[256] = {0};
        dict['a'] = 1, dict['A'] = 1;
        dict['e'] = 1, dict['E'] = 1;
        dict['i'] = 1, dict['I'] = 1;
        dict['o'] = 1, dict['O'] = 1;
        dict['u'] = 1, dict['U'] = 1;
        while(i<j){
            while(i<j && dict[s[i]] == 0) i++;
            while(i < j && dict[s[j]] == 0) j--;
            swap(s[i],s[j]);
            i++;j--;
        }
        return s;
        
    }
};