class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Minp=INT_MAX;
        int Maxp=0;
        for(auto i:prices){
            Minp=min(Minp,i);
            Maxp=max(Maxp,i-Minp);
        }
        return Maxp;
    }
};