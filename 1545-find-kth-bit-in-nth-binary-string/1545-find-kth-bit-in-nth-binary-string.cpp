class Solution {
    string Gen(int n){
        if(n<2){
            return "0";
        }
        string s=Gen(n-1);
        string t=s;
        reverse(t.begin(),t.end());
        for(char&c:t) c^=1;
        return s+"1"+t;
    }
public:
    char findKthBit(int n, int k) {
        string str=Gen(n);
        //return Gen(n)[k-1];
        return str[k-1];
    }
};