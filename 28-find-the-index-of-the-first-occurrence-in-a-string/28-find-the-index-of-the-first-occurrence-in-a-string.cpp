class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack==needle) return 0;
         if(haystack.compare(needle)!=0){
             return haystack.find(needle);
         }
        else
        {
            return -1;
        }
    }
};