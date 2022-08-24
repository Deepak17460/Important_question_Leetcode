class Solution {
public:
    bool isPowerOfThree(int n) {
        // corner case
        if(n==0) return 0;
        // base case
        if(n==1) return 1;
        if(n%3==0){
            int ans=isPowerOfThree(n/3);
            if(ans==1) return true;
        }
        return false;
    }
};