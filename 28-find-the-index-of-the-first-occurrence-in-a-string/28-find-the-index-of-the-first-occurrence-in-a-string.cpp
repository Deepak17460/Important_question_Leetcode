class Solution {
public:
    int strStr(string haystack, string needle) {   
    int n=needle.size();
    int l=0;
    int m=haystack.size();
    while(l<m){
        string str;
        str=haystack.substr(l,n);
        // checking
        if(needle==str) return l;
        l++;
    }
    return -1;
    }
};