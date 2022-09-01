class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // For 1st Transcation
    int minp1=INT_MAX;
    int Maxp1=0;
    int minp2=INT_MAX;
        // For 2nd Transaction
    int Maxp2=0;
    for(int i=0;i<prices.size();i++){
        // Buying
        minp1=min(minp1,prices[i]);
       // selling
        Maxp1=max(Maxp1,prices[i]-minp1);
        // Buying
        minp2=min(minp2,prices[i]-Maxp1);
        // Selling
        Maxp2=max(Maxp2,prices[i]-minp2);
        cout<<Maxp2<<endl;
    }
        // final return the answer
    return Maxp2;
    }
};