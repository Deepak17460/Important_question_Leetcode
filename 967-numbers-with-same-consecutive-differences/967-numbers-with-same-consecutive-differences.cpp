class Solution {
public:
    
    // vector<int> ans;
    void helper(int len, int diff, int number, vector<int>&h){
        if(len==0){
            // cout << number << endl;
            h.push_back(number);
            return;
        }
        int last = number%10;
        if(diff==0){
            helper(len-1,diff,number*10 + (last),h);
            return;
        }
        if(last + diff < 10){
            helper(len-1,diff,number*10 + (last+diff),h);
        }
        if(last - diff >= 0){
            helper(len-1,diff,number*10 + (last-diff),h);
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> fans;
        for(int i = 1;i<=9;i++){
            helper(n-1,k,i,fans);
        }
        return fans;
    }
};